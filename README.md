	在Observer模式的实现中，Subject维护一个list作为存储其所有观察者的容器。可通过Attach操作与Detach操作加入和删除观察者，每当调用Notify操作就遍历list中的Observer对象，并广播通知改变状态（调用Observer的Update操作）。目标的状态state可以由Subject自己改变，也可以由Observer的某个操作引起state改变（调用Subject的SetState操作）。Notify操作由Subject目标主动广播，也可以由Observer观察者来调用（因为Observer维护一个只想Subject的指针）。
	运行实例程序，可以看到当Subject处于“old”时候，以来于它的两个观察者都显示“old”，当目标状态改变为“new”的时候，依赖于它的两个观察者也都改变为“new”。
