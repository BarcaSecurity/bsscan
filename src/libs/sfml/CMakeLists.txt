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
