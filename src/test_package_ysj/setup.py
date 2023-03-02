from setuptools import setup

package_name = 'test_package_ysj'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='82103',
    maintainer_email='82103@todo.todo',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'simple_publisher_node = test_package_ysj.simple_publisher_node:main',
            'simple_subscriber_node = test_package_ysj.simple_subscriber_node:main',
            'temperature_sensor = test_package_ysj.temperature_sensor:main',
            'temperature_alert = test_package_ysj.temperature_alert:main',
            'service_server_node = test_package_ysj.service_server_node:main',
            'service_client_node = test_package_ysj.service_client_node:main',
            'fibonacci_action_server = test_package_ysj.fibonacci_action_server:main'
        ],
    },
)
