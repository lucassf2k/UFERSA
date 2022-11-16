public class ImageProxy implements Graphic {

  private Image image;

  public ImageProxy(Image image) {
    this.image = image;
  }

  @Override
  public void draw() {
   System.out.println("Executou no ImageProxy");
   this.image.draw();
  };

  @Override
  public void getExtent() { 
   System.out.println("Executou no ImageProxy");
   this.image.getExtent();
 };
}
