public class Flat {

    private int number;
    private boolean callReceived;
    private String name;

    public Flat(int number, String name) {
        this.number = number;
        this.name = name;
        this.callReceived = false;
    }
  
    public int getNumber() {
        return this.number;
    }

    public void receiveCall() {
        this.callReceived = true;
    }

    public void answerCall() {
        if (this.callReceived) {
            System.out.println("Call to flat " + this.number + " in progress");
        }
    }

    public void endCall() {
        if (this.callReceived) {
            System.out.println("Call to flat " + this.number + " ended");
            this.callReceived = false;
        }
    }
}
