# robosys2024-02.2

## 概要
このros2パッケージは、受信した整数値の合計が100を超えるとノードを終了します。

## テスト環境
- Ros2
- Ubuntu 24.04 LTS

## セットアップ
1. ワークスペースの作成
```
$ mkdir -p ~/ros2_ws
$ cd ~/ros2_ws
```

2. リポジトリのクローン
```
$ git clone https://github.com/Mark-168/robosys2024-02.2.git
```
3. ビルド
```
$ colcon build
```

### ノード
| ノード名 | 内容 |
|----------|------|
| Value | safety値を受け取り累積し、累計値としてtotalを返す |

### トピック
| トピック名 | 型 | 内容 |
|------------|----|------|
| safety | std_msg/Int16 |受信する整数の値 |

## 使い方
1. ROS2を起動(別ターミナル)
```
$ ros2 run mypkg range
```
2. サービスqueryにperson_msgs/srv/Query型の値を送信
```
$ ros2 service call /query person_msgs/srv/Query "{safety: 20}"
$ ros2 service call /query person_msgs/srv/Query "{safety: 50}"
```

### ノード
| ノード名 | 内容 |
|----------|------|
| Value | safety値を受け取り累積し、累計値としてtotalを返す |

### トピック
| トピック名 | 型 | 内容 |
|------------|----|------|
| safety | std_msg/Int16 |受信する整数の値 |

# ライセンス
- このソフトウェアパッケージは,3条項BSDライセンスの下,再頒布および使用が許可されます.

# Copyright
- © 2024 Issei Takei
