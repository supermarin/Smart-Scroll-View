## Introduction
This is a component which can automatically scroll your scrollview when the keyboard comes up and covers your input field(s).

Instead of you, it will:

    - Add the scrollView as a subview. That means, you don't have to do it in the IB, and you can resize the view as much as you like when editing.
    - Set the scrollView's content size and frame size
    - Automatically scroll when the keyboard pops up, and scroll back
    - Release the view if using a non-arc environment


Images coming soon... 

## Instalation
    - Clone / Download the repo
    - Copy the SmartScrollViewController folder inside your XCode project (drag n drop)
    - Start using it!

## Usage
    - #import the SmartScrollview.h
    - Extend the SmartScrollView in your ViewController.h
    - In the InterfaceBuilder, wire the scroll view outlet

## iPhone / iPad support
It works for both iPhone/iPad, and all you have to do is extend the controller and wire your scrollView outlet in the Interface Builder.

## In progress..
The support for the action sheets, pickers, etc
