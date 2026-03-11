#!/usr/local/bin/wish -f
# -*- Mode: TCL; -*-
#~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
# $Id: sk.tcl,v 1.3 1994/10/08 14:17:07 hammele Exp hammele $
# $Log: sk.tcl,v $
#  Revision 1.3  1994/10/08  14:17:07  hammele
#  *** empty log message ***
#
#~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

#now initialize some global vars.

# first we need a pipe to sk
set sk_f [open |sk a+]

#~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
# now we introduce a state-var
# clean ... exit without need to save internal state of sk.
# dirty ... internal state of sk modified since last save, so force quit or...
set state "clean"

#~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
source /usr/public/tools/TclTk/lib/FSBox.tcl

#~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
# name of current `.sko'-file
set sk_n "current.sko"

# auto_path set linux needs it this way!?
set auto_path "/usr/public/tools/TclTk/lib $tk_library/demos $auto_path"

# i like a title for my windows
wm title . " Konfig-Tool "

#~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
# create an initial frame 
frame .menu -relief raised -bd 1

# and display it
pack .menu -side top -fill x

# menu-structure  File Help

#~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

# File-Menu
menubutton .menu.file -text "File" -menu .menu.file.m -und 0 \
	-width 7 -anchor nw -bd 1 -relief raised

menu .menu.file.m
.menu.file.m add com -lab "New"     -com "file_new"     -und 0
.menu.file.m add sep
.menu.file.m add com -lab "Load"    -com "file_load"    -und 0
.menu.file.m add com -lab "Save"    -com "file_save"    -und 0
.menu.file.m add com -lab "Compile" -com "file_compile" -und 0
.menu.file.m add sep
.menu.file.m add com -lab "Exit"    -com "file_exit"    -und 0

#~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

# Help-Menu
menubutton .menu.help -text "Help" -menu .menu.help.m -und 0 \
	-bd 1 -relief raised

menu .menu.help.m
.menu.help.m add com -lab "Help" -com "help_help" -und 0
#.menu.help.m add com -lab "Conformance" -com "help_conformance" -und 0
#.menu.help.m add com -lab "Specialization" -com "help_specialization" -und 0
.menu.help.m add sep
.menu.help.m add com -lab "About" -com "help_about" -und 0
pack .menu.file -side left
pack .menu.help -side right

#~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

# use menubuttons as slide menu
tk_menuBar .menu .menu.button

#~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
# dummy frame for better placement
frame .f -bd 1 -relief flat

#~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

# listbox on left side off frame used as source
listbox .f.source
frame .f.source.frame -bd 1 -relief sunken
pack .f.source.frame -side top -exp yes -fill both
scrollbar .f.source.frame.scrollv -relief sunken \
	-com ".f.source.frame.list yview"
scrollbar .f.source.frame.scrollh -relief sunken \
	-com ".f.source.frame.list xview" -orient horizontal
listbox .f.source.frame.list -relief sunken -setgrid true -geometry 30x20 \
	-yscroll ".f.source.frame.scrollv set" \
	-xscroll ".f.source.frame.scrollh set"
pack .f.source.frame.scrollv -side right -fill y
pack .f.source.frame.scrollh -side bottom -fill x
pack .f.source.frame.list -side left -exp yes -fill both
pack .f.source -side left -exp yes -fill both

bind .f.source.frame.list <Double-Button-1> { display_class [selection get] }

#~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

#buttons
frame .f.c -bd 1 -relief flat

# upper buttons
frame .f.c.u -relief sunken -bd 1
button .f.c.u.ab -anchor w -com "right is_abs" -text "abstract classes"
button .f.c.u.co -anchor w -com "right is_con" -text "concrete classes"
button .f.c.u.va -anchor w -com "right is_val" -text "value classes"
button .f.c.u.re -anchor w -com "right is_ref" -text "reference classes"
pack .f.c.u .f.c.u.ab .f.c.u.co .f.c.u.va .f.c.u.re .f.c.u \
	-fill x

frame .f.c.c -relief sunken -bd 1
button .f.c.c.ge -anchor w -com "right is_gen" -text "generalizations"
button .f.c.c.se -anchor w -com "right is_spe" -text "specializations"
button .f.c.c.sb -anchor w -com "right is_sub" -text "subclasses"
button .f.c.c.sp -anchor w -com "right is_sup" -text "superclasses"
pack .f.c.c .f.c.c.ge .f.c.c.se .f.c.c.sb .f.c.c.sp -fill x

frame .f.c.d -relief sunken -bd 1
button .f.c.d.ge -anchor w -com "right is_dir_gen" -text "direct general."
button .f.c.d.se -anchor w -com "right is_dir_spe" -text "direct special."
button .f.c.d.sb -anchor w -com "right is_dir_sub" -text "direct subclass"
button .f.c.d.sp -anchor w -com "right is_dir_sup" -text "direct supercl."
pack .f.c.d .f.c.d.ge .f.c.d.se .f.c.d.sb .f.c.d.sp -fill x

frame .f.c.e -relief sunken -bd 1
button .f.c.e.us -anchor w -com "right is_cud" -text "classes used"
button .f.c.e.ub -anchor w -com "right is_cug" -text "classes using"
pack .f.c.e .f.c.e.us .f.c.e.ub -fill x

frame .f.c.f -relief sunken -bd 1
button .f.c.f.us -anchor w -com "right is_cdd" -text "direct used"
button .f.c.f.ub -anchor w -com "right is_cdg" -text "direct using"
pack .f.c.f .f.c.f.us .f.c.f.ub -fill x

frame .f.c.g -relief sunken -bd 1
button .f.c.g.te -anchor w -com "right is_tes" -text "test-class"
button .f.c.g.ex -anchor w -com "right is_exc" -text "exceptions"
pack .f.c.g .f.c.g.te .f.c.g.ex -fill x

frame .f.c.l -relief sunken -bd 1
button .f.c.l.left -text "<= move" -com "left"
button .f.c.l.init -text "reinit"  -com "init"
button .f.c.l.addr -text "add  =>" -com "add_right"

pack .f.c.l .f.c.l.left .f.c.l.init .f.c.l.addr -fill x

pack .f.c .f.c.u -side top 
pack .f.c .f.c.c -side top -pady 5
pack .f.c .f.c.d -side top -pady 5
pack .f.c .f.c.e -side top -pady 5
pack .f.c .f.c.f -side top -pady 5
pack .f.c .f.c.g -side top -pady 5
pack .f.c .f.c.l -side bottom 

#~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

listbox .f.destin
frame .f.destin.frame -bd 1 -relief sunken
pack .f.destin.frame -side top -exp yes -fill both
scrollbar .f.destin.frame.scrollv -relief sunken \
	-com ".f.destin.frame.list yview"
scrollbar .f.destin.frame.scrollh -relief sunken \
	-com ".f.destin.frame.list xview" -orient horizontal
listbox .f.destin.frame.list -relief sunken -setgrid true -geometry 30x20 \
	-yscroll ".f.destin.frame.scrollv set" \
	-xscroll ".f.destin.frame.scrollh set"
pack .f.destin.frame.scrollv -side right -fill y
pack .f.destin.frame.scrollh -side bottom -fill x
pack .f.destin.frame.list -side left -exp yes -fill both
pack .f.destin -side right -exp yes -fill y

bind .f.destin.frame.list <Double-Button-1> { display_class [selection get] }

#~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

pack .f .f.source -side left -fill both -exp yes 
pack .f .f.c      -side left -fill both
pack .f .f.destin -side left -fill both -exp yes

#~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#~~~~~~~~~~~~~~~~~~~~~~~~~~~~#
# bindings for both listboxes#
#~~~~~~~~~~~~~~~~~~~~~~~~~~~~#
proc display_class {class} {
    if {$class == {}} {	return } # don't display empty selection

    change_cursor . watch

    set w .c_$class
    set loc [sk_communicate "where-is $class"]

    catch {destroy $w}
    toplevel $w

    # looks like
    # +--------------------+-------+
    # |                   ^|      ^|
    # |                   ||      ||
    # |                   ||      ||
    # |                   v| <--->v|
    # ++----++---++---++---+------++
    # ||full||inv||cty|     |close||
    # ++----++---++---++---+------++
   
    # we need some buttons (full, invariant, complexity, close)
    frame $w.b -bd 2 -relief sunken
    button $w.b.ful -text "full listing" \
	    -com "dsp_cls_full_listing $w $w.l.t $loc"
    button $w.b.cll -text "class listing" \
	    -com "dsp_cls_class_listing $w $w.l.t $class"
    button $w.b.sht -text "short-description" \
	    -com "dsp_cls_short_description $w $w.l.t $class"
    button $w.b.inv -text "invariant" -com "dsp_cls_invariant $w $class"
    button $w.b.com -text "complexity" -com "dsp_cls_complexity $w $class"
    button $w.b.mfa -text "makefile" -com "dsp_cls_makefile $w $class"
    button $w.b.clo -text "close" -com "destroy $w"

    pack $w.b.ful $w.b.cll $w.b.sht $w.b.inv $w.b.com $w.b.mfa $w.b.clo \
	    -side left -exp yes -fill x
    pack $w.b -side bottom -fill x

    # left side, i.e. text window
    frame $w.l
    text $w.l.t -relief flat -bd 1 -yscrollcommand "$w.l.y set" \
	-setgrid true -height 20 -wrap word -width 40
    scrollbar $w.l.y -relief sunken -com "$w.l.t yview"

    pack $w.l.y -side right -fill y -exp yes
    pack $w.l.t -side top -fill both -exp yes
    pack $w.l -side left -fill both -exp yes

    # right side, i.e. methods (signature)
    frame $w.r  
    scrollbar $w.r.y -relief sunken -com "$w.r.b yview"
    scrollbar $w.r.x -relief sunken -com "$w.r.b xview" -orient horizontal
    listbox $w.r.b -relief flat -yscroll "$w.r.y set" -xscroll "$w.r.x set" \
	-setgrid true
    bind $w.r.b <Double-Button-1> "display_feature $w $class \[selection get\]"

    pack $w.r.y -side right  -fill y -exp yes
    pack $w.r.x -side bottom -fill x
    pack $w.r.b -side top -fill both -exp yes
    pack $w.r -side right -fill both
    
    # need a title
    wm title $w $loc

    loadListWithoutNewline $w.r.b [sk_communicate "signature $class"]

    $w.l.t configure -state normal
    set le [loadList $w.l.t [sk_communicate "describe-class $class"]]
    if {$le < 40} { set le 40 }
    if {$le > 80} { set le 80 }
    $w.l.t configure -width $le -state disabled

    change_cursor . {}
}

proc dsp_cls_class_listing {main text class} {
    change_cursor $main watch
    $text configure -state normal
    $text delete 1.0 end
    set le [loadList $text [sk_communicate "list-class $class"]]
    if {$le < 40} { set le 40 }
    if {$le > 80} { set le 80 }
    $text configure -width $le -state disabled
    change_cursor $main {}
}

proc dsp_cls_full_listing {main text loc} {
    change_cursor $main watch
    $text configure -state normal
    $text delete 1.0 end
    set le [loadTextfile $text $loc]
    if {$le < 40} { set le 40 }
    if {$le > 80} { set le 80 }
#    if {[file writable $loc] == 0} {
	$text configure -width $le -state disabled
#    }
    change_cursor $main {}
}

proc dsp_cls_short_description {main text class} {
    change_cursor $main watch
    $text configure -state normal
    $text delete 1.0 end
    set le [loadList $text [sk_communicate "describe-class $class"]]
    if {$le < 40} { set le 40 }
    if {$le > 80} { set le 80 }
    $text configure -width $le -state disabled
    change_cursor $main {}
}

proc dsp_cls_makefile {parent class} {

    set w .c_makefile_$class

    catch {destroy $w}
    toplevel $w

    #
    # looks like
    # +--------------------+
    # |                   ^|
    # |                   ||
    # |                   ||
    # |                   v|
    # +--------------------+
    # |   ok   |   cancel  |
    # +--------------------+
  
    # options window
    frame $w.o
    text $w.o.t -relief flat -bd 1 -yscrollcommand "$w.o.y set" \
	-setgrid true -height 30 -wrap none -width 80
    scrollbar $w.o.y -relief sunken -com "$w.o.t yview"
    button $w.cancel -anchor c -com "destroy $w" -text "cancel"
    button $w.ok -anchor c -text "ok" \
	    -com "generate_makefile $w $parent $class"

    pack $w.o.y -side right -exp yes -fill y
    pack $w.o.t -side top -exp yes -fill both
    pack $w.o -side top
    pack $w.ok -side left -exp yes -fill x
    pack $w.cancel -side right -exp yes -fill x
}

proc generate_makefile { w parent class } {
    global state fsBox

    change_cursor $parent watch
    set fsBox(pattern) "*.mk"
    set fn [FSBox {} "Makefile"]
    if {$fn != {}} {
	set res {}
	set len [$w.o.t index end]
	set i 0.0
	while {$i < $len} {
	    set x [string trimright [$w.o.t get $i [expr $i + 1]]]
	    set res [format "%s \{%s\}" $res $x]
	    set i [expr $i + 1]
	}
	sk_communicate "makefile $class $fn $res"
    }
    change_cursor $parent {}
    destroy $w
}

proc dsp_cls_invariant {window class} {
    set w [format "%s%s" $window "_invariant"]

    change_cursor $window watch

    catch {destroy $w}
    toplevel $w

    # looks like
    # +--------------------+
    # |                    |
    # |                    |
    # |                    |
    # |                    |
    # +--------------------+

    frame $w.f -relief sunken -bd 2
    
    text $w.f.t -relief flat -bd 1 -yscrollcommand "$w.f.y set" \
	-setgrid true -height 10 -width 40
    scrollbar $w.f.y -relief sunken -com "$w.f.t yview"

    pack $w.f.y -side right -fill y -exp yes
    pack $w.f.t -side top -fill both -exp yes
    pack $w.f -fill both -exp yes

    frame $w.b -relief sunken -bd 2
    button $w.b.clo -text "close" -com "destroy $w"
    
    pack $w.b.clo -side left -exp yes -fill x
    pack $w.b -side bottom -fill x
 
    $w.f.t configure -state normal -wrap word
    $w.f.t delete 1.0 end
    set le [loadList $w.f.t [sk_communicate "invariant $class"]]
    if {$le < 40} { set le 40 }
    if {$le > 80} { set le 80 }
    $w.f.t configure -width $le -state disabled

    # need a title
    wm title $w $class::INVARIANT
    change_cursor $window {}
}

proc dsp_cls_complexity { window class} {
    set w [format "%s%s" $window "_complexity"]

    change_cursor $window watch

    catch {destroy $w}
    toplevel $w

    # looks like
    # +--------------------+
    # |                    |
    # |                    |
    # |                    |
    # |                    |
    # +--------------------+

    frame $w.f -relief sunken -bd 2
    
    text $w.f.t -relief flat -bd 1 -yscrollcommand "$w.f.y set" \
	-setgrid true -height 10 -width 40
    scrollbar $w.f.y -relief sunken -com "$w.f.t yview"

    pack $w.f.y -side right -fill y -exp yes
    pack $w.f.t -side top -fill both -exp yes
    pack $w.f -fill both -exp yes

    frame $w.b -relief sunken -bd 2
    button $w.b.clo -text "close" -com "destroy $w"
    
    pack $w.b.clo -side left -exp yes -fill x
    pack $w.b -side bottom -fill x
 
    # need a title
    wm title $w $class::COMPLEXITY

    $w.f.t configure -state normal -wrap word
    $w.f.t delete 1.0 end
    set le [loadList $w.f.t [sk_communicate "complexity-class $class"]]
    if {$le < 40} { set le 40 }
    if {$le > 80} { set le 80 }
    $w.f.t configure -width $le -state disabled

    change_cursor $window {}
}

proc hash_name {name} {
    set res {}
    for {set i 0} {$i < [string length $name]} {incr i} {
	set c [string index $name $i]
	if {("A" <= $c) && ($c <= "Z")} {	
	    set res [format "%s$c" $res]
	} elseif {"a" <= $c && $c <= "z"} {
	    set res [format "%s$c" $res]
	} elseif {"0" <= $c && $c <= "9"} {  
	    set res [format "%s$c" $res]
	} else { 
	    set res [format "%s_" $res] 
	}
    }
    return $res
}

proc display_feature {main class feature} {

    if {$class == {}} {	return } # don't display empty selection
    if {$feature == {}} { return } # don't display empty selection

    change_cursor $main watch

    set w [format ".c_%s_f_%s" $class [hash_name $feature]]
    set loc [sk_communicate "where-is $class"]

    catch {destroy $w}
    toplevel $w -geometry 30x30

    # looks like
    # +--------------------+
    # |                    |
    # |                    |
    # |                    |
    # |                    |
    # +--------------------+

    frame $w.f -relief sunken -bd 1
    text $w.f.t -relief flat -bd 1 -yscrollcommand "$w.f.y set" \
	-setgrid true -height 25 -width 40
    scrollbar $w.f.y -relief sunken -com "$w.f.t yview"

    pack $w.f.y -side right -fill y -exp yes
    pack $w.f.t -side top -fill both -exp yes
    pack $w.f -fill both -exp yes

    frame $w.b -relief sunken -bd 2
    button $w.b.lis -text "listing" \
	    -com "dsp_fea_listing $w $w.f.t $class $feature"
    button $w.b.des -text "description" \
	    -com "dsp_fea_description $w $w.f.t $class $feature"
    button $w.b.clo -text "close" -com "destroy $w"
    
    pack $w.b.lis $w.b.des $w.b.clo -side left -exp yes -fill x
    pack $w.b -side bottom -fill x

    # need a title
    wm title $w [format "%s::%s" $class [hash_name $feature]]
 
    $w.f.t configure -state normal -wrap word
    $w.f.t delete 1.0 end

    #puts stdout "describe-feature $class $feature"
    set le [loadList $w.f.t [sk_communicate "describe-feature $class $feature"]]
    if {$le < 40} { set le 40 }
    if {$le > 80} { set le 80 }
    $w.f.t configure -width $le -state disabled

    change_cursor $main {}
}

proc dsp_fea_description {main text class feature} {
    change_cursor $main watch
    $text configure -state normal
    $text delete 1.0 end
    set le [loadList $text [sk_communicate "describe-feature $class {$feature}"]]
    if {$le < 40} { set le 40 }
    if {$le > 80} { set le 80 }
    $text configure -width $le -state disabled
    change_cursor $main {}
}

proc dsp_fea_listing {main text class feature} {
    change_cursor $main watch
    $text configure -state normal
    $text delete 1.0 end
    set le [loadList $text [sk_communicate "list-feature $class {$feature}"]]
    if {$le < 40} { set le 40 }
    if {$le > 80} { set le 80 }
    $text configure -width $le -state disabled
    change_cursor $main {}
}

proc no_action {} {
    tk_dialog .modal {no action} {not yet implemented} {} -1 OK
}
#~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

#~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~#
#procedures for pull-down-menu `file'#
#~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~#

#--------------------------------
# file_new
#--------------------------------
proc file_new {} { 
    global state sk_f abstract_classes value_classes sh_det
    if {$state != "clean"} {
        set res [tk_dialog .modal {New} \
                 {Are you sure you want to discard?} {} 1 Yes No]
        if {$res == 1} {
	     return
	}
    }
    set state "clean"
    puts $sk_f "exit"
    flush $sk_f
    close $sk_f
    set sk_f [open |sk a+]

    .f.source.frame.list delete 0 end
    .f.destin.frame.list delete 0 end
    set sh_det 0
    set abstract_classes {}
    set value_classes {}
}

#--------------------------------
# file_save
#--------------------------------
proc file_save {} {
    global state fsBox

    set fsBox(pattern) "*.sko"
    set fn [FSBox]

    sk_communicate "write $fn"
    set state "clean"
}

#--------------------------------
# file_load
#--------------------------------
proc file_load {} {
    global fsBox state

    set fsBox(pattern) "*.sko"
    set fn [FSBox]
    if {$fn != ""} {
	change_cursor . watch
	.f.source.frame.list delete 0 end
	.f.destin.frame.list delete 0 end
	set res [sk_communicate "load $fn"]
        set state "dirty"
        if {$res != {}} {
	    display_list "warning" $res
#	    tk_dialog .modal {warning} [list_to_string $res] {} -1 OK
        }
	all_classes
	change_cursor . {}
#puts stdout [list_to_string $abstract_classes]
    }
    return $fn
}

#--------------------------------
# file_compile
#--------------------------------
proc file_compile {} {
    global fsBox state

    set fsBox(pattern) "*.sa"
    set fn [FSBox]
    if {$fn != ""} {
	change_cursor . watch
	.f.source.frame.list delete 0 end
	.f.destin.frame.list delete 0 end
	set res [sk_communicate "compile $fn"]
        set state "dirty"
        if {$res != {}} {
	    display_list "warning" $res
#	    tk_dialog .modal {warning} [list_to_string $res] {} -1 OK
	}
	all_classes
	change_cursor . {}
    }
    return $fn
}

#--------------------------------
# file_exit
#--------------------------------
proc file_exit {} {
    global sk_f state

    if {$state != "clean"} {
	set res [tk_dialog .modal {Exit} \
			{Are you sure you want to exit?} {} 1 Yes No]
	if {$res == 1} {
	    return
	}
    }
    catch {set res [sk_communicate "exit"]}
    catch {close $sk_f}
    destroy .
}

#~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

#~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

#~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~#
#procedures for pull-down-menu `help'#
#~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~#

#--------------------------------
# help_about
#--------------------------------
proc help_about {} {
    mkDialog .modal \
 {-text {skonfig

(c) University of Karlsruhe
Department of Computer Science
Prof. Dr. Gerhard Goos

Configuration Utility for
Sather-K programs
written by
Markus Hammele
}\
    -justify center} {OK {}}
    wm title .modal "about skonfig" 
    dpos .modal
    tkwait visibility .modal
    grab .modal
    tkwait window .modal
} 

#--------------------------------
# help_conformance
#--------------------------------
proc help_conformance {} {
    mkDialog .modal {-text {}} {OK {}}
    wm title .modal "conformance" 
    dpos .modal
    tkwait visibility .modal
    grab .modal
    tkwait window .modal
} 

#--------------------------------
# help_specialization
#--------------------------------
proc help_specialization {} {
    mkDialog .modal {-text {}} {OK {}}
    wm title .modal "specialization" 
    dpos .modal
    tkwait visibility .modal
    grab .modal
    tkwait window .modal
} 

#~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

#~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~#
#procedures for pull-down-menu `show'#
#~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~#

#--------------------------------
# show_location
#--------------------------------
proc show_location {} {
} 

#~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#~~~~~~~~~#
#utilities#
#~~~~~~~~~#

#--------------------------------
# loadTextfile
#--------------------------------
proc loadTextfile {t file} {
    set res 0
#puts stdout "in loadTextfile"
    set f [open $file]
#puts stdout $f
    while {! [eof $f]} {
	set l [gets $f]
        set le [string length $l]
	if  {$res < $le} { set res $le}
#puts stdout $l
    	$t insert end $l
    	$t insert end "\n"
    }
    close $f
    return $res
}

#--------------------------------
# loadList
#--------------------------------
proc loadList {t list} {
    set res 0
    set line 0
    set lines [llength $list]
    while {$line < $lines} {
	set l [lindex $list $line]
	incr line
        set le [string length $l]
	if  {$res < $le} { set res $le}
    	$t insert end $l
    	$t insert end "\n"
    }
    return $res
}

#--------------------------------
# loadListWithoutNewline
#--------------------------------
proc loadListWithoutNewline {t list} {
    set res 0
    set line 0
    set lines [llength $list]
    while {$line < $lines} {
	set l [lindex $list $line]
	incr line
        set le [string length $l]
	if  {$res < $le} { set res $le}
    	$t insert end $l
    }
    return $res
}

#--------------------------------
# dpos w
#--------------------------------
proc dpos w {
    wm geometry $w +300+300
}

#--------------------------------
# list_to_string
#--------------------------------
proc list_to_string l {
    set res [lindex $l 0]
    set i 0
    set ll [llength $l]
    while {$i < $ll} {
	append res "\n" [lindex $l $i]
	incr i
    }
    return $res;
}

#--------------------------------
#yes_no
#--------------------------------
proc yes_no {message default} {
    set res $default
    return $res
}

#--------------------------------
# all_classes
#--------------------------------
proc all_classes {} {
    global abstract_classes value_classes
    set res [sk_communicate "all-classes"]

    set l [llength $res]
    while {$l > 0} {
	set l [expr $l - 1]
	.f.source.frame.list insert 0 [lindex $res $l]
    }

    set abstract_classes [sk_communicate "abstract-classes"]
    set value_classes    [sk_communicate "value-classes"]

    .f.source.frame.list select from 0
    .f.source.frame.list select to end
    .f.destin.frame.list select clear
}

#--------------------------------
# init
#--------------------------------
proc init {} {
    .f.source.frame.list delete 0 end
    .f.destin.frame.list delete 0 end
    all_classes
}

#--------------------------------
# is_abs
#--------------------------------
proc is_abs {class} {
    global abstract_classes

    if {[lsearch $abstract_classes $class] == -1} {
	return [list {}]
    } else {
	return [list $class]
    }
}

#--------------------------------
# is_con
#--------------------------------
proc is_con {class} {
    global abstract_classes
    if {[lsearch -exact $abstract_classes $class] != -1} {
	return [list {}]
    } else {
	return [list $class]
    }
}

#--------------------------------
# is_val
#--------------------------------
proc is_val {class} {
    global value_classes
    if {[lsearch -exact $value_classes $class] == -1} {
	return [list {}]
    } else {
	return [list $class]
    }
}

#--------------------------------
# is_ref
#--------------------------------
proc is_ref {class} {
    global value_classes
    if {[lsearch -exact $value_classes $class] != -1} {
	return [list {}]
    } else {
	return [list $class]
    }
}

#--------------------------------
# is_gen
#--------------------------------
proc is_gen {class} {
    return [sk_communicate "generalizations $class"]
}

#--------------------------------
# is_spe
#--------------------------------
proc is_spe {class} {
    return [sk_communicate "specializations $class"]
}

#--------------------------------
# is_sub
#--------------------------------
proc is_sub {class} {
    return [sk_communicate "sub-classes $class"]
}

#--------------------------------
# is_sup
#--------------------------------
proc is_sup {class} {
    return [sk_communicate "super-classes $class"]
}

#--------------------------------
# is_dir_gen
#--------------------------------
proc is_dir_gen {class} {
    return [sk_communicate "direct-generalizations $class"]
}

#--------------------------------
# is_dir_spe
#--------------------------------
proc is_dir_spe {class} {
    return [sk_communicate "direct-specializations $class"]
}

#--------------------------------
# is_dir_sub
#--------------------------------
proc is_dir_sub {class} {
    return [sk_communicate "direct-sub-classes $class"]
}

#--------------------------------
# is_dir_sup
#--------------------------------
proc is_dir_sup {class} {
    return [sk_communicate "direct-super-classes $class"]
}

#--------------------------------
# is_cud
#--------------------------------
proc is_cud {class} {
    return [sk_communicate "used-classes $class"]
}

#--------------------------------
# is_cug
#--------------------------------
proc is_cug {class} {
    return [sk_communicate "classes-using $class"]
}

#--------------------------------
# is_cdd
#--------------------------------
proc is_cdd {class} {
    return [sk_communicate "direct-used-classes $class"]
}

#--------------------------------
# is_cdg
#--------------------------------
proc is_cdg {class} {
    return [sk_communicate "direct-classes-using $class"]
}

#--------------------------------
# is_tes
#--------------------------------
proc is_tes {class} {
    return [sk_communicate "test-class $class"]
}

#--------------------------------
# is_exc
#--------------------------------
proc is_exc {class} {
    return [sk_communicate "exceptions $class"]
}

#--------------------------------
# right
#------
# move marked class to right
# while filtering
#--------------------------------
proc right {to_do} {
    global abstract_classes

    change_cursor . watch
    .f.destin.frame.list delete 0 end
#puts stdout [list_to_string $abstract_classes]
    set res {}
    set selected [eval .f.source.frame.list curselection]
    set l [llength $selected]
    while {$l > 0} {
	set l [expr $l - 1]
	set x [.f.source.frame.list get [lindex $selected $l]]
#puts stdout $x
	set i [$to_do $x]
	set res [concat $res $i]
    }
    set res [lsort $res]
    set l [llength $res]
    set item {}
    while {$l > 0} {
	set l [expr $l - 1]
	set new_item [lindex $res $l]
	if {$new_item != $item && $new_item != {}} {
	    .f.destin.frame.list insert 0 $new_item
	    set item $new_item
	}
    }
    .f.destin.frame.list select from 0
    .f.destin.frame.list select to end
    change_cursor . {}
}

#--------------------------------
# add_right
#----------
# add marked class to right
#--------------------------------
proc add_right {} {
    set content {}
    set l [.f.destin.frame.list size]
    while {$l > 0} {
	set l [expr $l - 1]
	lappend content [.f.destin.frame.list get $l]
    }
    .f.destin.frame.list delete 0 end
    set selected [eval .f.source.frame.list curselection]
    set l [llength $selected]
    while {$l > 0} {
	set l [expr $l - 1]
	lappend content [.f.source.frame.list get [lindex $selected $l]]
    }
    set content [lsort $content]
    set l [llength $content]
    set item {}
    while {$l > 0} {
	set l [expr $l - 1]
	set new_item [lindex $content $l]
	if {$new_item != $item && $new_item != {}} {
	    .f.destin.frame.list insert 0 $new_item
	    set item $new_item
	}
    }
    .f.destin.frame.list select from 0
    .f.destin.frame.list select to end
}

#--------------------------------
# left
#-----
# move marked class to left
#--------------------------------
proc left {} {
    .f.source.frame.list delete 0 end
    set selected [eval .f.destin.frame.list curselection]
    set l [llength $selected]
    while {$l > 0} {
	set l [expr $l - 1]
	.f.source.frame.list insert 0 \
		[.f.destin.frame.list get [lindex $selected $l]]
    }
    .f.destin.frame.list delete 0 end
    .f.source.frame.list select from 0
    .f.source.frame.list select to end
}

#~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#--------------------------------
# display_list
#--------------------------------
proc display_list {t ll} {
    set w .dlist

    catch {destroy $w}
    toplevel $w -class Dialog
    wm title $w $t
    wm iconname $w Dialog
    frame $w.a -relief sunken -bd 1
    scrollbar $w.a.vbar -relief sunken -com "$w.a.lbox yview"
    scrollbar $w.a.hbar -relief sunken -com "$w.a.lbox xview" -orient horizontal
    listbox $w.a.lbox -relief sunken -setgrid true -geometry 30x20 \
	    -yscroll "$w.a.vbar set" -xscroll "$w.a.hbar set"
    pack $w.a.vbar -side right -fill y
    pack $w.a.hbar -side bottom -fill x
    pack $w.a.lbox -side left -exp yes -fill both
    pack $w.a -side top -exp yes -fill both

    frame $w.b -relief sunken -bd 1
    button $w.b.ok -com "destroy $w" -text "OK"
    pack $w.b.ok -exp yes -fill x
    pack $w.b -side bottom -exp yes -fill x

    set i [llength $ll]
    set l 0
    while {$l < $i} {
	$w.a.lbox insert end [lindex $ll $l]
	incr l
    }

    wm withdraw $w
    wm deiconify $w

    # 5. Set a grab and claim the focus too.

    grab $w
    focus $w
}
#~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#--------------------------------
# change_cursor
#--------------------------------
proc change_cursor {wdw type} {
    $wdw configure -cursor $type
    update idletasks
#    foreach w [pack slaves $wdw] {
#	$w configure -cursor $type
#	change_cursor $w $type
#    }
}
#~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#--------------------------------
# sk_communicate
#--------------------------------
proc sk_communicate {message} {
    global sk_f

    puts stdout [format "<%s>" $message]
    puts $sk_f $message
    flush $sk_f
    set ip {}
    gets $sk_f ip
    set err_out {}
    set res {}
    while {$ip != $message} {
	#puts stdout $ip
	if {[string match "error:*" $ip] == 1} {
	    lappend err_out $ip
	} else {
	    lappend res $ip
	}
        gets $sk_f ip
    }
    if {$err_out != {}} {
	display_list "errors" $err_out
    }
    return $res
}

#-------------------------------------------------------------------------
proc load_rc_file {file_name} {
    set fn [string trim $file_name]
    set res [file exists $fn]
    if {$res == 1} {
	set rc_fh [open [string trim $file_name] r]
	while {[eof $rc_fh] == 0} {
	    set ip [gets $rc_fh]
	    if {([string length $ip] >= 3)} {
		set i [string first "\#include" $ip]
		if {$i == 0} {
		    load_rc_file [string range [expr $i+8] end]
		} else {
		    set i [string first "\#chain" $ip]
		    if {$i == 0} {
			load_rc_file [string range [expr $i+6] end]
			return 1;
		    } else {
			if {([string index $ip 0] != "\#")} {
			    sk_communicate $ip
			}
		    }
		}
	    }
	}
	close $rc_fh
    }
    return $res
}
#-------------------------------------------------------------------------
change_cursor . watch
if {[load_rc_file ".skrc"] == 0} {
    if {[load_rc_file "~/.skrc"] == 0} {
	if {[load_rc_file "$env(KARLA)/config/.skrc"] == 0} {
	    if {($argc != 1) || ([lindex $argv 0] != "no_karla")} {
		set res [sk_communicate "load $env(KARLA)/karla.sko"]
		set state "dirty"
		if {$res != {}} {
		    display_list $res
		}
	    }
	}
    }
}
all_classes
change_cursor . {}

#-------------------------------------------------------------------------
