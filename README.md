# Design Mode
## overview

|目的|设计模式|可变内容|
|-|-|-|
|创建|Abstract Factory<br>Builder<br>Factory Method<br>Prototype<br>Singleton|产品对象家族<br>如何创建一个组合对象<br>被实例化的子类<br>被实例化的类<br>一个类的唯一实例|
|结构|Adapter<br>Bridge<br>Composite<br>Decorator<br>Facade<br>Flyweight<br>Proxy|对象的接口<br>对象的实现<br>一个对象的结构和组成<br>对象的职责，不生成子类<br>一个子系统的接口<br>对象的存储开销<br>如何访问一个对象：该对象的位置|
|行为|Chain of Responsibility<br>Command<br>Interpreter<br>Iterator<br>Mediator<br>Memento<br>Observer<br>State<br>Strategy<br>Template Method<br>Visitor|满足一个请求的对象<br>何时、怎样满足一个请求<br>一个语言的文法和解释<br>如何遍历、访问一个聚合的各元素<br>对象间怎样交互、和谁交互<br>一个对象中有哪些私有信息存放在该对象之外，以及在什么时候进行存储<br>多个对象依赖另一个对象，而这些对象又如何保持一致<br>对象的状态<br>算法<br>算法中的某些步骤<br>某些可以作用于一个（组）对象上的操作，但不修改这些对象的类|

## bridge
- 目的
将抽象部分与它的实现部分分离，使得它们都可以独立地变化，是一种耦合更加松的模式

- 适用性
不希望在抽象和它的实现部分之间有一个固定的绑定关系，这种情况可能是因为在程序运行时刻实现部分可以被选择或者切换
