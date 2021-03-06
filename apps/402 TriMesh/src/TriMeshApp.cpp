#include "cinder/app/App.h"
#include "cinder/app/RendererGl.h"
#include "cinder/gl/gl.h"

using namespace ci;
using namespace ci::app;
using namespace std;

class TriMeshApp : public App {
  public:
	void setup() override;
	void mouseDown( MouseEvent event ) override;
	void update() override;
	void draw() override;
};

void TriMeshApp::setup()
{
}

void TriMeshApp::mouseDown( MouseEvent event )
{
}

void TriMeshApp::update()
{
}

void TriMeshApp::draw()
{
	gl::clear( Color( 0, 0, 0 ) ); 
}

CINDER_APP( TriMeshApp, RendererGl )
