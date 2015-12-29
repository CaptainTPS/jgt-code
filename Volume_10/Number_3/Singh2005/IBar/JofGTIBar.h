// generated by Fast Light User Interface Designer (fluid) version 1.0100

#ifndef JofGTIBar_h
#define JofGTIBar_h


#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Gl_Window.H>

#include "OGLObjs_Camera.H"
#include "Cam_IBar.H"

using namespace std;

class JofGTIBar : public Fl_Gl_Window {
protected:
    
    CAMIBar     m_IBar;
    bool        m_bShowIBar, m_bMouseOverIBar, m_bMouseOverBoundary;

    int    m_iSelected;
    R2Pt   m_ptLast;
    double m_dSpinLast, m_dTiltLast, m_dPanLast, m_dDotSize;

public:
    void ToggleIBar()         { m_bShowIBar = (m_bShowIBar == FALSE ? TRUE : FALSE); }
    void ToggleCenterObject() { m_IBar.ToggleCenterObject(); }

    void Spin( const double in_d );
    void Pan( const double in_d );
    void Tilt( const double in_d );

    void CenterMesh();
    double CenterDots();

    OGLObjsCamera       &SetCamera() ;
    const OGLObjsCamera &GetCamera() const { return m_IBar; }

    virtual void draw();
    virtual int handle(int);
    virtual void resize( int x, int y, int w, int h );

    int ChangeCamera( unsigned char Key );

    JofGTIBar(int X, int Y, int W, int H, const char *L = NULL);
    ~JofGTIBar();
};
#endif