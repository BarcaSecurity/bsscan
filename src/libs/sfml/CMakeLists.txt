add_library(SFml
    # AUDIO
    audio/AL_check.cpp
    audio/AL_check.cpp
    audio/AL_resource.cpp
    audio/audio_device.cpp
    audio/audio_device.hpp
    audio/input_sound_file.cpp
    audio/listener.cpp
    audio/music.cpp
    audio/output_sound_file.cpp
    audio/sound_buffer_recorder.cpp
    audio/sound_buffer.cpp
    audio/sound_file_factory.cpp
    audio/sound_file_reader_flac.cpp
    audio/sound_file_reader_flac.hpp
    audio/sound_file_reader_ogg.cpp
    audio/sound_file_reader_ogg.hpp
    audio/sound_file_reader_wav.cpp
    audio/sound_file_reader_wav.hpp
    audio/sound_file_writer_flac.cpp
    audio/sound_file_writer_flac.hpp
    audio/sound_file_writer_ogg.cpp
    audio/sound_file_writer_ogg.hpp
    audio/sound_file_writer_wav.cpp
    audio/sound_file_writer_wav.hpp
    audio/sound_recorder.cpp
    audio/sound_source.cpp
    audio/sound_stream.cpp
    audio/sound.cpp
    # GRAPHICS
    graphics/blend_mode.cpp
    graphics/circle_shape.cpp
    graphics/font.cpp
    graphics/GL_check.cpp
    graphics/GL_check.hpp
    graphics/GL_extensions.cpp
    graphics/GL_extensions.hpp
    graphics/GL_loader.cpp
    graphics/GL_loader.hpp
    graphics/glsl.cpp
    graphics/image_loader.cpp
    graphics/image_loader.hpp
    graphics/image.cpp
    graphics/rectangle_shape.cpp
    graphics/render_states.cpp
    graphics/render_target.cpp
    graphics/render_texture_impl_default.cpp
    graphics/render_texture_impl_default.hpp
    graphics/render_texture_impl.cpp
    graphics/render_texture_impl.hpp
    graphics/render_texture_implFBO.cpp
    graphics/render_texture_implFBO.hpp
    graphics/render_texture.cpp
    graphics/render_window.cpp
    graphics/shader.cpp
    graphics/shape.cpp
    graphics/sprite.cpp
    graphics/text.cpp
    graphics/texture_saver.cpp
    graphics/texture_saver.hpp
    graphics/texture.cpp
    graphics/transform.cpp
    graphics/transformable.cpp
    graphics/vertex_array.cpp
    graphics/vertex_buffer.cpp
    graphics/vertex.cpp
    graphics/view.cpp
    # SYSTEM
    # TO ANDROID
    system/android/activity.cpp
    system/android/activity.hpp
    system/android/native_activity.cpp
    system/android/resource_stream.cpp
    system/android/resource_stream.hpp
    # TO UNIX
    system/unix/clock_impl.cpp
    system/unix/clock_impl.hpp
    system/unix/mutex_impl.cpp
    system/unix/mutex_impl.hpp
    system/unix/sleep_impl.cpp
    system/unix/sleep_impl.hpp
    system/unix/thread_impl.cpp
    system/unix/thread_impl.hpp
    system/unix/thread_local_impl.cpp
    system/unix/thread_local_impl.hpp
    # TO WINDOWS
    system/windows/clock_impl.cpp
    system/windows/clock_impl.hpp
    system/windows/mutex_impl.cpp
    system/windows/mutex_impl.hpp
    system/windows/sleep_impl.cpp
    system/windows/sleep_impl.hpp
    system/windows/thread_impl.cpp
    system/windows/thread_impl.hpp
    system/windows/thread_local_impl.cpp
    system/windows/thread_local_impl.hpp
    # DEFAULT
    system/clock.cpp
    system/err.cpp
    system/file_input_stream.cpp
    system/lock.cpp
    system/memory_input_stream.cpp
    system/mutex.cpp
    system/sleep.cpp
    system/string.cpp
    system/thread_local.cpp
    system/time.cpp
    # NETWORK
    # TO UNIX
    network/unix/socket_impl.cpp
    network/unix/socket_impl.hpp
    # TO WINDOWS
    network/windows/socket_impl.cpp
    network/windows/socket_impl.hpp
    # DEFAULT
    network/ftp.cpp
    network/http.cpp
    network/ip_address.cpp
    network/packet.cpp
    network/socket_impl.hpp
    network/socket_selector.cpp
    network/socket.cpp
    network/tcp_listener.cpp
    network/tcp_socket.cpp
    network/udp_socket.cpp
)

add_library(${PROJECT_NAME}::SFml ALIAS SFml)
