
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_text_html_TableView__
#define __javax_swing_text_html_TableView__

#pragma interface

#include <javax/swing/text/html/BlockView.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace javax
    {
      namespace swing
      {
        namespace text
        {
          namespace html
          {
            namespace css
            {
                class Length;
            }
          }
        }
      }
    }
  }
  namespace java
  {
    namespace awt
    {
        class Graphics;
        class Rectangle;
        class Shape;
    }
  }
  namespace javax
  {
    namespace swing
    {
        class SizeRequirements;
      namespace event
      {
          class DocumentEvent;
      }
      namespace text
      {
          class AttributeSet;
          class Element;
          class View;
          class ViewFactory;
        namespace html
        {
            class StyleSheet;
            class TableView;
        }
      }
    }
  }
}

class javax::swing::text::html::TableView : public ::javax::swing::text::html::BlockView
{

public:
  TableView(::javax::swing::text::Element *);
  virtual ::javax::swing::text::View * create(::javax::swing::text::Element *);
  virtual ::javax::swing::text::ViewFactory * getViewFactory();
  virtual ::javax::swing::text::AttributeSet * getAttributes();
public: // actually protected
  virtual ::javax::swing::text::html::StyleSheet * getStyleSheet();
  virtual ::javax::swing::SizeRequirements * calculateMinorAxisRequirements(jint, ::javax::swing::SizeRequirements *);
  virtual void layoutMinorAxis(jint, jint, JArray< jint > *, JArray< jint > *);
private:
  void calculateColumnRequirements();
  void layoutColumns(jint);
public: // actually package-private
  virtual void updateGrid();
public:
  virtual jfloat getMaximumSpan(jint);
  virtual void setParent(::javax::swing::text::View *);
public: // actually protected
  virtual void setPropertiesFromAttributes();
  virtual ::javax::swing::SizeRequirements * calculateMajorAxisRequirements(jint, ::javax::swing::SizeRequirements *);
  virtual void layoutMajorAxis(jint, jint, JArray< jint > *, JArray< jint > *);
public:
  virtual void insertUpdate(::javax::swing::event::DocumentEvent *, ::java::awt::Shape *, ::javax::swing::text::ViewFactory *);
  virtual void removeUpdate(::javax::swing::event::DocumentEvent *, ::java::awt::Shape *, ::javax::swing::text::ViewFactory *);
  virtual void changedUpdate(::javax::swing::event::DocumentEvent *, ::java::awt::Shape *, ::javax::swing::text::ViewFactory *);
  virtual void replace(jint, jint, JArray< ::javax::swing::text::View * > *);
  virtual void paint(::java::awt::Graphics *, ::java::awt::Shape *);
public: // actually package-private
  static jint access$0(::javax::swing::text::html::TableView *, jint, jint);
private:
  ::javax::swing::text::AttributeSet * __attribute__((aligned(__alignof__( ::javax::swing::text::html::BlockView)))) attributes;
public: // actually package-private
  JArray< ::javax::swing::SizeRequirements * > * columnRequirements;
  ::javax::swing::SizeRequirements * totalColumnRequirements;
  JArray< jint > * columnOffsets;
  JArray< jint > * columnSpans;
  JArray< ::gnu::javax::swing::text::html::css::Length * > * columnWidths;
  jint numColumns;
private:
  ::gnu::javax::swing::text::html::css::Length * width;
public: // actually package-private
  jboolean gridValid;
  jint cellSpacing;
private:
  ::java::awt::Rectangle * tmpRect;
public:
  static ::java::lang::Class class$;
};

#endif // __javax_swing_text_html_TableView__