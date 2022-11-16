public class Main {
  public static void main(String[] args) {
    Image image = new Image();

    Graphic graphic = new ImageProxy(image);
    Graphic graphic2 = new Image();

    graphic.draw();
    graphic.getExtent();

    System.out.println("===== Sem Proxy =====");
    graphic2.draw();
    graphic2.getExtent();
  }
}
