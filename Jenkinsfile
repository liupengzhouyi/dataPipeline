pipeline {
    agent any
//     agent {
//         label 'cpp'
//     }

    stages {
        stage('Build') {
            steps {
                echo 'Building..'
                git 'https://github.com/liupengzhouyi/dataPipeline.git'
                // sh 'mkdir build'
                sh script:'''
                    echo "This is start $(pwd)"
                    cd build
                    echo "This is $(pwd)"
                    cmake ..
                    ls -l
                    make -j4
                    ls -l
                '''
            }
        }
        stage('Test') {
            steps {
                echo 'Testing...'
                sh 'python3 test.py'
                sh script:'''
                    echo "This is start $(pwd)"
                    './dataPipeline'
                    echo "This is $(pwd)"
                '''
            }
        }
        stage('Deploy') {
            steps {
                echo 'Deploying....'
            }
        }
    }
}

