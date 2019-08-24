## myds

数据结构二轮复习，秋招面试复习专用，快速复习实现基本数据结构。

第二次的实现相对于第一次的主要关注点在于各种数据结构的良好组织上。本项目中的数据结构组织和继承链如下（随时间更新）：

### 目录（随时间更新）

```
root/ 
  List/ -- 链表抽象类 √
    StaticList -- 静态链表 √
    LinkedList -- 链表 √
  Stack/ -- 栈抽象类 √
    ArrayStack -- 数组栈 √ 
    LinkedStack -- 链表栈 √
  Queue/ -- 队列抽象类 √ 
    ArrayQueue -- 数组队列 √
    LinkedQueue -- 链表队列 √
  Tree/ -- 树 √
    BinaryTree/ -- 二叉树 √
      BSTree -- 二叉搜索树 √
      ThreadedTree/  -- 线索树抽象类 √
        PreThreadedTree -- 前序线索树 
        InThreadedTree -- 中序线索树 √
        PostThreadedTree -- 后序线索树 
      HuffmanTree -- 哈夫曼树 √
      AVLTree -- 平衡二叉树 
      FailerTree -- 败者树
    MultiTree -- 多叉树 
  Forest -- 森林
  Sort -- 排序 √
  Search --查找 √
  Graph/ -- 图抽象类 
    DiGraph/ -- 有向图
      DAG --有向无环图
    NdGraph -- 无向图 √
  HashSet/ -- 哈希表
    ArrayHashSet -- 基于开放定址法的哈希表
    ZipHashSet -- 基于拉链法的哈希表
  Heap -- 堆（优先队列）
```

