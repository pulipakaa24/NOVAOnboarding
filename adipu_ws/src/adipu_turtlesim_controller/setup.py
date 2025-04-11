from setuptools import find_packages, setup

package_name = 'adipu_turtlesim_controller'

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
    maintainer='root',
    maintainer_email='adipu@utexas.edu',
    description='Nodes for NOVA Onboarding',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
          "mouse_follow_node = adipu_turtlesim_controller.mouse_follower:main",
          "chaser_node = adipu_turtlesim_controller.turtle1_chaser:main",
          "chaser_flipper_node = adipu_turtlesim_controller.turtle2_flipper:main"
        ]
    }
)
