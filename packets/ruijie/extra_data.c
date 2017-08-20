// uchar CVz_APIApp.GetAppData(int &length)
unsigned char app_data[] = {
    0x20, 0x12, 0x05, 0x03, 0x21, 0x57, 0x00, 0x00,
    0xd4, 0xf6, 0x7c, 0x00, 0xf8, 0xfa, 0x7c, 0x99,
    0x0c, 0x82, 0x4c, 0x00, 0xdc, 0x00, 0x21, 0x01,
    0x08, 0xfb, 0x7c, 0x00, 0xb2, 0x26, 0x40, 0x58,
    0xe4, 0x6e, 0x21, 0x01, 0xd4, 0xf6, 0x7c, 0x00,
    0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x97,
    0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04,
    0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0xf0, 0x41, 0x00, 0x00, 0xf0, 0x41,
    0x00, 0x00, 0x40, 0x40, 0x00, 0x00, 0x00, 0x40,
    0x00, 0xc0, 0x15, 0x44, 0x00, 0x00, 0x16, 0x44,
    0x00, 0x00, 0x80, 0x3f, 0x00, 0x00, 0x80, 0x3f,
    0x00, 0x00, 0x00, 0x00, 0xc0, 0xd7, 0xe1, 0x40,
    0x00, 0x00, 0x00, 0x00, 0xc0, 0x52, 0xe3, 0x40,
    0x00, 0x00, 0x00, 0x00, 0xc0, 0xd7, 0xe1, 0x40,
    0x5a, 0x00, 0x00, 0x00, 0x00, 0x6f, 0x21, 0x01,
    0x00, 0x00, 0x00, 0x00, 0xa8, 0xfc, 0x7c, 0x00,
    0xca, 0x26, 0x40, 0x00, 0x5e, 0x2e, 0x00, 0x00,
    0x08, 0xf9, 0x7c, 0x00, 0x67, 0x69, 0x4c, 0x01,
    0x30, 0x31, 0x40, 0x00, 0x89, 0x2e, 0x40, 0x00,
    0x97, 0x2e, 0x40, 0x00, 0x00, 0x35, 0x40, 0x00,
    0x87, 0x69, 0x4c, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x06, 0x75, 0x40, 0x00, 0x14, 0x6f, 0x21, 0x01,
    0x08, 0x00, 0x7c, 0x00, 0x84, 0xf7, 0x7c, 0x00,
    0x90, 0xf7, 0x7c, 0x00, 0x08, 0xf9, 0x7c, 0x00,
    0xe8, 0x1e, 0x98, 0x81, 0x10, 0xfb, 0x06, 0xc9,
    0xed, 0xb7, 0xdd, 0xd6, 0xa4, 0xf9, 0x7c, 0x00,
    0x10, 0x00, 0x7c, 0x00, 0x3c, 0xf8, 0x7c, 0x00,
    0x14, 0xf8, 0x7c, 0x00, 0xe0, 0xfa, 0x7c, 0x00,
    0xd5, 0x68, 0xf7, 0xbf, 0x10, 0xfb, 0x00, 0x00,
    0x24, 0xf8, 0x7c, 0x00, 0xeb, 0x82, 0xf8, 0xbf,
    0x08, 0xf9, 0x7c, 0x00, 0x10, 0xfb, 0x7c, 0x00,
    0x3c, 0xf8, 0x7c, 0x00, 0x14, 0xf8, 0x7c, 0x00,
    0x5e, 0x69, 0x4c, 0x00, 0xcc, 0xf9, 0x7c, 0x00,
    0x7c, 0xf9, 0x7c, 0x00, 0xe4, 0x6e, 0x21, 0x01,
    0x1a, 0xd0, 0xa1, 0xcd, 0xf5, 0x20, 0xc9, 0xed,
    0xb7, 0xdd, 0xd6, 0xa4, 0x34, 0x31, 0x30, 0x31,
    0x30, 0x33, 0x37, 0x39, 0x31, 0x30, 0x32, 0x34,
    0x31, 0x34, 0x35, 0x00, 0x08, 0xf9, 0x7c, 0x00,
    0x20, 0xf8, 0x7c, 0x00, 0x2e, 0xde, 0xf9, 0xbf,
    0x08, 0xf9, 0x7c, 0x00, 0x01, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x14, 0x31, 0x31, 0x31,
    0x31, 0x31, 0x31, 0x31, 0x31, 0x31, 0x31, 0x31,
    0x31, 0x31, 0x31, 0x31, 0x31, 0x31, 0x31, 0x31,
    0x31, 0x00, 0x00, 0x00, 0x04, 0x30, 0x30, 0x30,
    0x32, 0x00, 0x00, 0x00, 0xd4, 0xf6, 0x7c, 0x00,
    0xf8, 0xfa, 0x7c, 0x00, 0x0c, 0x82, 0x4c, 0x00,
    0xdc, 0x00, 0x21, 0x01, 0x08, 0xfb, 0x7c, 0x00,
    0xb2, 0x26, 0x40, 0x00, 0xe4, 0x6e, 0x21, 0x01,
    0xd4, 0xf6, 0x7c, 0x00, 0x01, 0x00, 0x00, 0x00,
    0x01, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
    0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x42,
    0x00, 0x00, 0x70, 0x42, 0x00, 0x00, 0x40, 0x40,
    0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x96, 0x44,
    0x00, 0x00, 0x96, 0x44, 0x00, 0x00, 0x80, 0x3f,
    0x00, 0x00, 0x80, 0x3f, 0x00, 0x00, 0x00, 0x00,
    0xc0, 0xd7, 0xe1, 0x40, 0x00, 0x00, 0x00, 0x00,
    0xc0, 0x52, 0xe3, 0x40, 0x00, 0x00, 0x00, 0x00,
    0xc0, 0xd7, 0xe1, 0x40, 0x5a, 0x00, 0x00, 0x00,
    0x00, 0x6f, 0x21, 0x01, 0x00, 0x00, 0x00, 0x00,
    0xa8, 0xfc, 0x7c, 0x00, 0xca, 0x26, 0x40, 0x00,
    0x5e, 0x2e, 0x00, 0x00, 0x08, 0xf9, 0x7c, 0x00,
    0x67, 0x69, 0x4c, 0x01, 0x30, 0x31, 0x40, 0x00,
    0x89, 0x2e, 0x40, 0x00, 0x97, 0x2e, 0x40, 0x00,
    0x00, 0x35, 0x40, 0x00, 0x87, 0x69, 0x4c, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x06, 0x75, 0x40, 0x00,
    0x14, 0x6f, 0x21, 0x01, 0x08, 0x00, 0x7c, 0x00,
    0x84, 0xf7, 0x7c, 0x00, 0x90, 0xf7, 0x7c, 0x00,
    0x08, 0xf9, 0x7c, 0x00, 0xe8, 0x1e, 0x98, 0x81,
    0x10, 0xfb, 0x06, 0xc9, 0xed, 0xb7, 0xdd, 0xd6,
    0xa4, 0xf9, 0x7c, 0x00, 0x10, 0x00, 0x7c, 0x00,
    0x3c, 0xf8, 0x7c, 0x00, 0x14, 0xf8, 0x7c, 0x00,
    0xe0, 0xfa, 0x7c, 0x00, 0xd5, 0x68, 0xf7, 0xbf,
    0x10, 0xfb, 0x00, 0x00, 0x24, 0xf8, 0x7c, 0x00,
    0xeb, 0x82, 0xf8, 0xbf, 0x08, 0xf9, 0x7c, 0x00,
    0x10, 0xfb, 0x7c, 0x00, 0x3c, 0xf8, 0x7c, 0x00,
    0x14, 0xf8, 0x7c, 0x00, 0x5e, 0x69, 0x4c, 0x00,
    0xcc, 0xf9, 0x7c, 0x00, 0x7c, 0xf9, 0x7c, 0x00,
    0xe4, 0x6e, 0x21, 0x01, 0x1a, 0xd0, 0xa1, 0xd5,
    0xc5, 0x20, 0xc9, 0xed, 0xb7, 0xdd, 0xd6, 0xa4,
    0x35, 0x31, 0x30, 0x31, 0x30, 0x33, 0x37, 0x39,
    0x31, 0x30, 0x32, 0x34, 0x31, 0x31, 0x34, 0x00,
    0x08, 0xf9, 0x7c, 0x00, 0x20, 0xf8, 0x7c, 0x00,
    0x2e, 0xde, 0xf9, 0xbf, 0x08, 0xf9, 0x7c, 0x00,
    0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x14, 0x31, 0x31, 0x31, 0x31, 0x31, 0x31, 0x31,
    0x31, 0x31, 0x31, 0x31, 0x31, 0x31, 0x31, 0x31,
    0x31, 0x31, 0x31, 0x31, 0x31, 0x00, 0x00, 0x00,
    0x04, 0x30, 0x30, 0x30, 0x33, 0x00, 0x00, 0x00,
    0xd4, 0xf6, 0x7c, 0x00, 0xf8, 0xfa, 0x7c, 0x00,
    0x0c, 0x82, 0x4c, 0x00, 0xdc, 0x00, 0x21, 0x01,
    0x08, 0xfb, 0x7c, 0x00, 0xb2, 0x26, 0x40, 0x00,
    0xe4, 0x6e, 0x21, 0x01, 0xd4, 0xf6, 0x7c, 0x00,
    0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
    0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x70, 0x41, 0x00, 0x00, 0x70, 0x41,
    0x00, 0x00, 0x40, 0x40, 0x00, 0x00, 0x00, 0x40,
    0x00, 0x00, 0x96, 0x43, 0x00, 0x00, 0x96, 0x43,
    0x00, 0x00, 0x80, 0x3f, 0x00, 0x00, 0x80, 0x3f,
    0x00, 0x00, 0x00, 0x00, 0xc0, 0xd7, 0xe1, 0x40,
    0x00, 0x00, 0x00, 0x00, 0xc0, 0x52, 0xe3, 0x40,
    0x00, 0x00, 0x00, 0x00, 0xc0, 0xd7, 0xe1, 0x40,
    0x5a, 0x00, 0x00, 0x00, 0x00, 0x6f, 0x21, 0x01,
    0x00, 0x00, 0x00, 0x00, 0xa8, 0xfc, 0x7c, 0x00,
    0xca, 0x26, 0x40, 0x00, 0x5e, 0x2e, 0x00, 0x00,
    0x08, 0xf9, 0x7c, 0x00, 0x67, 0x69, 0x4c, 0x01,
    0x30, 0x31, 0x40, 0x00, 0x89, 0x2e, 0x40, 0x00,
    0x97, 0x2e, 0x40, 0x00, 0x00, 0x35, 0x40, 0x00,
    0x87, 0x69, 0x4c, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x06, 0x75, 0x40, 0x00, 0x14, 0x6f, 0x21, 0x01,
    0x08, 0x00, 0x7c, 0x00, 0x84, 0xf7, 0x7c, 0x00,
    0x90, 0xf7, 0x7c, 0x00, 0x08, 0xf9, 0x7c, 0x00,
    0xe8, 0x1e, 0x98, 0x81, 0x10, 0xfb, 0x06, 0xc9,
    0xed, 0xb7, 0xdd, 0xd6, 0xa4, 0xf9, 0x7c, 0x00,
    0x10, 0x00, 0x7c, 0x00, 0x3c, 0xf8, 0x7c, 0x00,
    0x14, 0xf8, 0x7c, 0x00, 0xe0, 0xfa, 0x7c, 0x00,
    0xd5, 0x68, 0xf7, 0xbf, 0x10, 0xfb, 0x00, 0x00,
    0x24, 0xf8, 0x7c, 0x00, 0xeb, 0x82, 0xf8, 0xbf,
    0x08, 0xf9, 0x7c, 0x00, 0x10, 0xfb, 0x7c, 0x00,
    0x3c, 0xf8, 0x7c, 0x00, 0x14, 0xf8, 0x7c, 0x00,
    0x5e, 0x69, 0x4c, 0x00, 0xcc, 0xf9, 0x7c, 0x00,
    0x7c, 0xf9, 0x7c, 0x00, 0xe4, 0x6e, 0x21, 0x01,
    0x1a, 0xd0, 0xa1, 0xc2, 0xed, 0x20, 0xc9, 0xed,
    0xb7, 0xdd, 0xd6, 0xa4, 0x34, 0x31, 0x30, 0x31,
    0x30, 0x33, 0x38, 0x31, 0x31, 0x30, 0x32, 0x34,
    0x31, 0x38, 0x37, 0x00, 0x08, 0xf9, 0x7c, 0x00,
    0x20, 0xf8, 0x7c, 0x00, 0x2e, 0xde, 0xf9, 0xbf,
    0x08, 0xf9, 0x7c, 0x00, 0x01, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x14, 0x31, 0x31, 0x31,
    0x31, 0x31, 0x31, 0x31, 0x31, 0x31, 0x31, 0x31,
    0x31, 0x31, 0x31, 0x31, 0x31, 0x31, 0x31, 0x31,
    0x31, 0x00, 0x00, 0x00, 0x08, 0x57, 0x61, 0x6e,
    0x67, 0x44, 0x6f, 0x6e, 0x67, 0xf6, 0x7c, 0x00,
    0xf8, 0xfa, 0x7c, 0x00, 0x0c, 0x82, 0x4c, 0x00,
    0xdc, 0x00, 0x21, 0x01, 0x08, 0xfb, 0x7c, 0x00,
    0xb2, 0x26, 0x40, 0x00, 0xe4, 0x6e, 0x21, 0x01,
    0xd4, 0xf6, 0x7c, 0x00, 0x01, 0x00, 0x00, 0x00,
    0x01, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
    0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc8, 0x42,
    0x00, 0x00, 0xc8, 0x42, 0x00, 0x00, 0x40, 0x40,
    0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x16, 0x45,
    0x00, 0x00, 0x16, 0x45, 0x00, 0x00, 0x80, 0x3f,
    0x00, 0x00, 0x80, 0x3f, 0x00, 0x00, 0x00, 0x00,
    0xc0, 0xd7, 0xe1, 0x40, 0x00, 0x00, 0x00, 0x00,
    0xc0, 0x52, 0xe3, 0x40, 0x00, 0x00, 0x00, 0x00,
    0xc0, 0xd7, 0xe1, 0x40, 0x5a, 0x00, 0x00, 0x00,
    0x00, 0x6f, 0x21, 0x01, 0x00, 0x00, 0x00, 0x00,
    0xa8, 0xfc, 0x7c, 0x00, 0xca, 0x26, 0x40, 0x00,
    0x5e, 0x2e, 0x00, 0x00, 0x08, 0xf9, 0x7c, 0x00,
    0x67, 0x69, 0x4c, 0x01, 0x30, 0x31, 0x40, 0x00,
    0x89, 0x2e, 0x40, 0x00, 0x97, 0x2e, 0x40, 0x00,
    0x00, 0x35, 0x40, 0x00, 0x87, 0x69, 0x4c, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x06, 0x75, 0x40, 0x00,
    0x14, 0x6f, 0x21, 0x01, 0x08, 0x00, 0x7c, 0x00,
    0x84, 0xf7, 0x7c, 0x00, 0x90, 0xf7, 0x7c, 0x00,
    0x08, 0xf9, 0x7c, 0x00, 0xe8, 0x1e, 0x98, 0x81,
    0x10, 0xfb, 0x06, 0xc9, 0xed, 0xb7, 0xdd, 0xd6,
    0xa4, 0xf9, 0x7c, 0x00, 0x10, 0x00, 0x7c, 0x00,
    0x3c, 0xf8, 0x7c, 0x00, 0x14, 0xf8, 0x7c, 0x00,
    0xe0, 0xfa, 0x7c, 0x00, 0xd5, 0x68, 0xf7, 0xbf,
    0x10, 0xfb, 0x00, 0x00, 0x24, 0xf8, 0x7c, 0x00,
    0xeb, 0x82, 0xf8, 0xbf, 0x08, 0xf9, 0x7c, 0x00,
    0x10, 0xfb, 0x7c, 0x00, 0x3c, 0xf8, 0x7c, 0x00,
    0x14, 0xf8, 0x7c, 0x00, 0x5e, 0x69, 0x4c, 0x00,
    0xcc, 0xf9, 0x7c, 0x00, 0x7c, 0xf9, 0x7c, 0x00,
    0xe4, 0x6e, 0x21, 0x01, 0x00, 0xd0, 0xa1, 0xc2,
    0xed, 0x20, 0xc9, 0xed, 0xb7, 0xdd, 0xd6, 0xa4,
    0x34, 0x31, 0x30, 0x31, 0x30, 0x33, 0x38, 0x31,
    0x31, 0x30, 0x32, 0x34, 0x31, 0x38, 0x37, 0x00,
    0x08, 0xf9, 0x7c, 0x00, 0x20, 0xf8, 0x7c, 0x00,
    0x2e, 0xde, 0xf9, 0xbf, 0x08, 0xf9, 0x7c, 0x00,
    0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x14, 0x31, 0x31, 0x31, 0x31, 0x31, 0x31, 0x31,
    0x31, 0x31, 0x31, 0x31, 0x31, 0x31, 0x31, 0x31,
    0x31, 0x31, 0x31, 0x31, 0x31, 0x00, 0x00, 0x00,
    0x03, 0x72, 0x65, 0x64, 0x67, 0x44, 0x6f, 0x6e,
    0x67, 0xf6, 0x7c, 0x00, 0xf8, 0xfa, 0x7c, 0x00,
    0x0c, 0x82, 0x4c, 0x00, 0xdc, 0x06, 0x3a, 0x30,
    0x3a, 0x3d, 0x2c, 0x24, 0xb2, 0x26, 0x40, 0x00,
    0xe4, 0x6e, 0x21, 0x01, 0xd4, 0xf6, 0x7c, 0x00,
    0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
    0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0xf0, 0x41, 0x00, 0x00, 0xf0, 0x41,
    0x00, 0x00, 0x40, 0x40, 0x00, 0x00, 0x00, 0x40,
    0x00, 0x00, 0x16, 0x44, 0x00, 0x00, 0x16, 0x44,
    0x00, 0x00, 0x80, 0x3f, 0x00, 0x00, 0x80, 0x3f,
    0x00, 0x00, 0x00, 0x00, 0xc0, 0xd7, 0xe1, 0x40,
    0x00, 0x00, 0x00, 0x00, 0xc0, 0x52, 0xe3, 0x40,
    0x00, 0x00, 0x00, 0x00, 0xc0, 0xd7, 0xe1, 0x40,
    0x5a, 0x00, 0x00, 0x00, 0x00, 0x6f, 0x21, 0x01,
    0x00, 0x00, 0x00, 0x00, 0xa8, 0xfc, 0x7c, 0x00,
    0xca, 0x26, 0x40, 0x00, 0x5e, 0x2e, 0x00, 0x00,
    0x08, 0xf9, 0x7c, 0x00, 0x67, 0x69, 0x4c, 0x01,
    0x30, 0x31, 0x40, 0x00, 0x89, 0x2e, 0x40, 0x00,
    0x97, 0x2e, 0x40, 0x00, 0x00, 0x35, 0x40, 0x00,
    0x87, 0x69, 0x4c, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x06, 0x75, 0x40, 0x00, 0x14, 0x6f, 0x21, 0x01,
    0x08, 0x00, 0x7c, 0x00, 0x84, 0xf7, 0x7c, 0x00,
    0x90, 0xf7, 0x7c, 0x00, 0x08, 0xf9, 0x7c, 0x00,
    0xe8, 0x1e, 0x98, 0x81, 0x10, 0xfb, 0x06, 0xc9,
    0xed, 0xb7, 0xdd, 0xd6, 0xa4, 0xf9, 0x7c, 0x00,
    0x10, 0x00, 0x7c, 0x00, 0x3c, 0xf8, 0x7c, 0x00,
    0x14, 0xf8, 0x7c, 0x00, 0xe0, 0xfa, 0x7c, 0x00,
    0xd5, 0x68, 0xf7, 0xbf, 0x10, 0xfb, 0x00, 0x00,
    0x24, 0xf8, 0x7c, 0x00, 0xeb, 0x82, 0xf8, 0xbf,
    0x08, 0xf9, 0x7c, 0x00, 0x10, 0xfb, 0x7c, 0x00,
    0x3c, 0xf8, 0x7c, 0x00, 0x14, 0xf8, 0x7c, 0x00,
    0x5e, 0x69, 0x4c, 0x00, 0xcc, 0xf9, 0x7c, 0x00,
    0x7c, 0xf9, 0x7c, 0x00, 0xe4, 0x6e, 0x21, 0x01,
    0x00, 0xd0, 0xa1, 0xc2, 0xed, 0x20, 0xc9, 0xed,
    0xb7, 0xdd, 0xd6, 0xa4, 0x34, 0x31, 0x30, 0x31,
    0x30, 0x33, 0x38, 0x31, 0x31, 0x30, 0x32, 0x34,
    0x31, 0x38, 0x37, 0x00, 0x08, 0xf9, 0x7c, 0x00,
    0x20, 0xf8, 0x7c, 0x00, 0x2e, 0xde, 0xf9, 0xbf,
    0x08, 0xf9, 0x7c, 0x00, 0x01, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x14, 0x31, 0x31, 0x31,
    0x31, 0x31, 0x31, 0x31, 0x31, 0x31, 0x31, 0x31,
    0x31, 0x31, 0x31, 0x31, 0x31, 0x31, 0x31, 0x31,
    0x31, 0x00, 0x00, 0x00
};

// uchar CVz_APIApp.GetDllData(int &length)
unsigned char dll_data[] = {
    0x20, 0x12, 0x05, 0x03, 0x21, 0x57, 0x74, 0x2e,
    0x63, 0x70, 0x70, 0x20, 0x3a, 0x20, 0x44, 0x65,
    0x66, 0x69, 0x6e, 0x65, 0x73, 0x20, 0x74, 0x68,
    0x65, 0x20, 0x63, 0x6c, 0x61, 0x73, 0x73, 0x20,
    0x62, 0x65, 0x68, 0x61, 0x76, 0x69, 0x6f, 0x72,
    0x73, 0x20, 0x66, 0x6f, 0x72, 0x20, 0x74, 0x68,
    0x65, 0x20, 0x61, 0x70, 0x70, 0x6c, 0x69, 0x63,
    0x61, 0x74, 0x69, 0x6f, 0x6e, 0x2e, 0x0d, 0x0a,
    0x2f, 0x2f, 0x0d, 0x0a, 0x0d, 0x0a, 0x23, 0x69,
    0x6e, 0x63, 0x6c, 0x75, 0x64, 0x65, 0x20, 0x22,
    0x73, 0x74, 0x64, 0x61, 0x66, 0x78, 0x2e, 0x68,
    0x22, 0x0d, 0x0a, 0x23, 0x69, 0x6e, 0x63, 0x6c,
    0x75, 0x64, 0x65, 0x20, 0x22, 0x54, 0x65, 0x73,
    0x74, 0x2e, 0x68, 0x22, 0x0d, 0x0a, 0x23, 0x69,
    0x6e, 0x63, 0x6c, 0x75, 0x64, 0x65, 0x20, 0x22,
    0x54, 0x65, 0x73, 0x74, 0x44, 0x6c, 0x67, 0x2e,
    0x68, 0x22, 0x0d, 0x0a, 0x0d, 0x0a, 0x23, 0x69,
    0x66, 0x64, 0x65, 0x66, 0x20, 0x5f, 0x44, 0x45,
    0x42, 0x55, 0x47, 0x0d, 0x0a, 0x23, 0x64, 0x65,
    0x66, 0x69, 0x6e, 0x65, 0x20, 0x6e, 0x65, 0x77,
    0x20, 0x44, 0x45, 0x42, 0x55, 0x47, 0x5f, 0x4e,
    0x45, 0x57, 0x0d, 0x0a, 0x23, 0x75, 0x6e, 0x64,
    0x65, 0x66, 0x20, 0x54, 0x48, 0x49, 0x53, 0x5f,
    0x46, 0x49, 0x4c, 0x45, 0x0d, 0x0a, 0x73, 0x74,
    0x61, 0x74, 0x69, 0x63, 0x20, 0x63, 0x68, 0x61,
    0x72, 0x20, 0x54, 0x48, 0x49, 0x53, 0x5f, 0x46,
    0x49, 0x4c, 0x45, 0x5b, 0x5d, 0x20, 0x3d, 0x20,
    0x5f, 0x5f, 0x46, 0x49, 0x4c, 0x45, 0x5f, 0x5f,
    0x3b, 0x0d, 0x0a, 0x23, 0x65, 0x6e, 0x64, 0x69,
    0x66, 0x0d, 0x0a, 0x0d, 0x0a, 0x2f, 0x2f, 0x2f,
    0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f,
    0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f,
    0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f,
    0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f,
    0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f,
    0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f,
    0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f,
    0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f,
    0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f,
    0x2f, 0x2f, 0x0d, 0x0a, 0x2f, 0x2f, 0x20, 0x43,
    0x54, 0x65, 0x73, 0x74, 0x41, 0x70, 0x70, 0x0d,
    0x0a, 0x0d, 0x0a, 0x42, 0x45, 0x47, 0x49, 0x4e,
    0x5f, 0x4d, 0x45, 0x53, 0x53, 0x41, 0x47, 0x45,
    0x5f, 0x4d, 0x41, 0x50, 0x28, 0x43, 0x54, 0x65,
    0x73, 0x74, 0x41, 0x70, 0x70, 0x2c, 0x20, 0x43,
    0x57, 0x69, 0x6e, 0x41, 0x70, 0x70, 0x29, 0x0d,
    0x0a, 0x09, 0x2f, 0x2f, 0x7b, 0x7b, 0x41, 0x46,
    0x58, 0x5f, 0x4d, 0x53, 0x47, 0x5f, 0x4d, 0x41,
    0x50, 0x28, 0x43, 0x54, 0x65, 0x73, 0x74, 0x41,
    0x70, 0x70, 0x29, 0x0d, 0x0a, 0x09, 0x09, 0x2f,
    0x2f, 0x20, 0x4e, 0x4f, 0x54, 0x45, 0x20, 0x2d,
    0x20, 0x74, 0x68, 0x65, 0x20, 0x43, 0x6c, 0x61,
    0x73, 0x73, 0x57, 0x69, 0x7a, 0x61, 0x72, 0x64,
    0x20, 0x77, 0x69, 0x6c, 0x6c, 0x20, 0x61, 0x64,
    0x64, 0x20, 0x61, 0x6e, 0x64, 0x20, 0x72, 0x65,
    0x6d, 0x6f, 0x76, 0x65, 0x20, 0x6d, 0x61, 0x70,
    0x70, 0x69, 0x6e, 0x67, 0x20, 0x6d, 0x61, 0x63,
    0x72, 0x6f, 0x73, 0x20, 0x68, 0x65, 0x72, 0x65,
    0x2e, 0x0d, 0x0a, 0x09, 0x09, 0x2f, 0x2f, 0x20,
    0x20, 0x20, 0x20, 0x44, 0x4f, 0x20, 0x4e, 0x4f,
    0x54, 0x20, 0x45, 0x44, 0x49, 0x54, 0x20, 0x77,
    0x68, 0x61, 0x74, 0x20, 0x79, 0x6f, 0x75, 0x20,
    0x73, 0x65, 0x65, 0x20, 0x69, 0x6e, 0x20, 0x74,
    0x68, 0x65, 0x73, 0x65, 0x20, 0x62, 0x6c, 0x6f,
    0x63, 0x6b, 0x73, 0x20, 0x6f, 0x66, 0x20, 0x67,
    0x65, 0x6e, 0x65, 0x72, 0x61, 0x74, 0x65, 0x64,
    0x20, 0x63, 0x6f, 0x64, 0x65, 0x21, 0x0d, 0x0a,
    0x09, 0x2f, 0x2f, 0x7d, 0x7d, 0x41, 0x46, 0x58,
    0x5f, 0x4d, 0x53, 0x47, 0x0d, 0x0a, 0x09, 0x4f,
    0x4e, 0x5f, 0x43, 0x4f, 0x4d, 0x4d, 0x41, 0x4e,
    0x44, 0x28, 0x49, 0x44, 0x5f, 0x48, 0x45, 0x4c,
    0x50, 0x2c, 0x20, 0x43, 0x57, 0x69, 0x6e, 0x41,
    0x70, 0x70, 0x3a, 0x3a, 0x4f, 0x6e, 0x48, 0x65,
    0x6c, 0x70, 0x29, 0x0d, 0x0a, 0x45, 0x4e, 0x44,
    0x5f, 0x4d, 0x45, 0x53, 0x53, 0x41, 0x47, 0x45,
    0x5f, 0x4d, 0x41, 0x50, 0x28, 0x29, 0x0d, 0x0a,
    0x0d, 0x0a, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f,
    0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f,
    0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f,
    0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f,
    0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f,
    0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f,
    0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f,
    0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f,
    0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f,
    0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x0d,
    0x0a, 0x2f, 0x2f, 0x20, 0x43, 0x54, 0x65, 0x73,
    0x74, 0x41, 0x70, 0x70, 0x20, 0x63, 0x6f, 0x6e,
    0x73, 0x74, 0x72, 0x75, 0x63, 0x74, 0x69, 0x6f,
    0x6e, 0x0d, 0x0a, 0x0d, 0x0a, 0x43, 0x54, 0x65,
    0x73, 0x74, 0x41, 0x70, 0x70, 0x3a, 0x3a, 0x43,
    0x54, 0x65, 0x73, 0x74, 0x41, 0x70, 0x70, 0x28,
    0x29, 0x0d, 0x0a, 0x7b, 0x0d, 0x0a, 0x09, 0x2f,
    0x2f, 0x20, 0x54, 0x4f, 0x44, 0x4f, 0x3a, 0x20,
    0x61, 0x64, 0x64, 0x20, 0x63, 0x6f, 0x6e, 0x73,
    0x74, 0x72, 0x75, 0x63, 0x74, 0x69, 0x6f, 0x6e,
    0x20, 0x63, 0x6f, 0x64, 0x65, 0x20, 0x68, 0x65,
    0x72, 0x65, 0x2c, 0x0d, 0x0a, 0x09, 0x2f, 0x2f,
    0x20, 0x50, 0x6c, 0x61, 0x63, 0x65, 0x20, 0x61,
    0x6c, 0x6c, 0x20, 0x73, 0x69, 0x67, 0x6e, 0x69,
    0x66, 0x69, 0x63, 0x61, 0x6e, 0x74, 0x20, 0x69,
    0x6e, 0x69, 0x74, 0x69, 0x61, 0x6c, 0x69, 0x7a,
    0x61, 0x74, 0x69, 0x6f, 0x6e, 0x20, 0x69, 0x6e,
    0x20, 0x49, 0x6e, 0x69, 0x74, 0x49, 0x6e, 0x73,
    0x74, 0x61, 0x6e, 0x63, 0x65, 0x0d, 0x0a, 0x7d,
    0x0d, 0x0a, 0x0d, 0x0a, 0x2f, 0x2f, 0x2f, 0x2f,
    0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f,
    0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f,
    0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f,
    0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f,
    0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f,
    0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f,
    0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f,
    0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f,
    0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f,
    0x2f, 0x0d, 0x0a, 0x2f, 0x2f, 0x20, 0x54, 0x68,
    0x65, 0x20, 0x6f, 0x6e, 0x65, 0x20, 0x61, 0x6e,
    0x64, 0x20, 0x6f, 0x6e, 0x6c, 0x79, 0x20, 0x43,
    0x54, 0x65, 0x73, 0x74, 0x41, 0x70, 0x70, 0x20,
    0x6f, 0x62, 0x6a, 0x65, 0x63, 0x74, 0x0d, 0x0a,
    0x0d, 0x0a, 0x43, 0x54, 0x65, 0x73, 0x74, 0x41,
    0x70, 0x70, 0x20, 0x74, 0x68, 0x65, 0x41, 0x70,
    0x70, 0x3b, 0x0d, 0x0a, 0x0d, 0x0a, 0x2f, 0x2f,
    0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f,
    0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f,
    0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f,
    0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f,
    0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f,
    0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f,
    0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f,
    0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f,
    0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f,
    0x2f, 0x2f, 0x2f, 0x0d, 0x0a, 0x2f, 0x2f, 0x20,
    0x43, 0x54, 0x65, 0x73, 0x74, 0x41, 0x70, 0x70,
    0x20, 0x69, 0x6e, 0x69, 0x74, 0x69, 0x61, 0x6c,
    0x69, 0x7a, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x0d,
    0x0a, 0x0d, 0x0a, 0x42, 0x4f, 0x4f, 0x4c, 0x20,
    0x43, 0x54, 0x65, 0x73, 0x74, 0x41, 0x70, 0x70,
    0x3a, 0x3a, 0x49, 0x6e, 0x69, 0x74, 0x49, 0x6e,
    0x73, 0x74, 0x61, 0x6e, 0x63, 0x65, 0x28, 0x29,
    0x0d, 0x0a, 0x7b, 0x0d, 0x0a, 0x09, 0x41, 0x66,
    0x78, 0x45, 0x6e, 0x61, 0x62, 0x6c, 0x65, 0x43,
    0x6f, 0x6e, 0x74, 0x72, 0x6f, 0x6c, 0x43, 0x6f,
    0x6e, 0x74, 0x61, 0x69, 0x6e, 0x65, 0x72, 0x28,
    0x29, 0x3b, 0x0d, 0x0a, 0x0d, 0x0a, 0x09, 0x2f,
    0x2f, 0x20, 0x53, 0x74, 0x61, 0x6e, 0x64, 0x61,
    0x72, 0x64, 0x20, 0x69, 0x6e, 0x69, 0x74, 0x69,
    0x61, 0x6c, 0x69, 0x7a, 0x61, 0x74, 0x69, 0x6f,
    0x6e, 0x0d, 0x0a, 0x09, 0x2f, 0x2f, 0x20, 0x49,
    0x66, 0x20, 0x79, 0x6f, 0x75, 0x20, 0x61, 0x72,
    0x65, 0x20, 0x6e, 0x6f, 0x74, 0x20, 0x75, 0x73,
    0x69, 0x6e, 0x67, 0x20, 0x74, 0x68, 0x65, 0x73,
    0x65, 0x20, 0x66, 0x65, 0x61, 0x74, 0x75, 0x72,
    0x65, 0x73, 0x20, 0x61, 0x6e, 0x64, 0x20, 0x77,
    0x69, 0x73, 0x68, 0x20, 0x74, 0x6f, 0x20, 0x72,
    0x65, 0x64, 0x75, 0x63, 0x65, 0x20, 0x74, 0x68,
    0x65, 0x20, 0x73, 0x69, 0x7a, 0x65, 0x0d, 0x0a,
    0x09, 0x2f, 0x2f, 0x20, 0x20, 0x6f, 0x66, 0x20,
    0x79, 0x6f, 0x75, 0x72, 0x20, 0x66, 0x69, 0x6e,
    0x61, 0x6c, 0x20, 0x65, 0x78, 0x65, 0x63, 0x75,
    0x74, 0x61, 0x62, 0x6c, 0x65, 0x2c, 0x20, 0x79,
    0x6f, 0x75, 0x20, 0x73, 0x68, 0x6f, 0x75, 0x6c,
    0x64, 0x20, 0x72, 0x65, 0x6d, 0x6f, 0x76, 0x65,
    0x20, 0x66, 0x72, 0x6f, 0x6d, 0x20, 0x74, 0x68,
    0x65, 0x20, 0x66, 0x6f, 0x6c, 0x6c, 0x6f, 0x77,
    0x69, 0x6e, 0x67, 0x0d, 0x0a, 0x09, 0x2f, 0x2f,
    0x20, 0x20, 0x74, 0x68, 0x65, 0x20, 0x73, 0x70,
    0x65, 0x63, 0x69, 0x66, 0x69, 0x63, 0x20, 0x69,
    0x6e, 0x69, 0x74, 0x69, 0x61, 0x6c, 0x69, 0x7a,
    0x61, 0x74, 0x69, 0x6f, 0x6e, 0x20, 0x72, 0x6f,
    0x75, 0x74, 0x69, 0x6e, 0x65, 0x73, 0x20, 0x79,
    0x6f, 0x75, 0x20, 0x64, 0x6f, 0x20, 0x6e, 0x6f,
    0x74, 0x20, 0x6e, 0x65, 0x65, 0x64, 0x2e, 0x0d,
    0x0a, 0x0d, 0x0a, 0x23, 0x69, 0x66, 0x64, 0x65,
    0x66, 0x20, 0x5f, 0x41, 0x46, 0x58, 0x44, 0x4c,
    0x4c, 0x0d, 0x0a, 0x09, 0x45, 0x6e, 0x61, 0x62,
    0x6c, 0x65, 0x33, 0x64, 0x43, 0x6f, 0x6e, 0x74,
    0x72, 0x6f, 0x6c, 0x73, 0x28, 0x29, 0x3b, 0x09,
    0x09, 0x09, 0x2f, 0x2f, 0x20, 0x43, 0x61, 0x6c,
    0x6c, 0x20, 0x74, 0x68, 0x69, 0x73, 0x20, 0x77,
    0x68, 0x65, 0x6e, 0x20, 0x75, 0x73, 0x69, 0x6e,
    0x67, 0x20, 0x4d, 0x46, 0x43, 0x20, 0x69, 0x6e,
    0x20, 0x61, 0x20, 0x73, 0x68, 0x61, 0x72, 0x65,
    0x64, 0x20, 0x44, 0x4c, 0x4c, 0x0d, 0x0a, 0x23,
    0x65, 0x6c, 0x73, 0x65, 0x0d, 0x0a, 0x09, 0x45,
    0x6e, 0x61, 0x62, 0x6c, 0x65, 0x33, 0x64, 0x43,
    0x6f, 0x6e, 0x74, 0x72, 0x6f, 0x6c, 0x73, 0x53,
    0x74, 0x61, 0x74, 0x69, 0x63, 0x28, 0x29, 0x3b,
    0x09, 0x2f, 0x2f, 0x20, 0x43, 0x61, 0x6c, 0x6c,
    0x20, 0x74, 0x68, 0x69, 0x73, 0x20, 0x77, 0x68,
    0x65, 0x6e, 0x20, 0x6c, 0x69, 0x6e, 0x6b, 0x69,
    0x6e, 0x67, 0x20, 0x74, 0x6f, 0x20, 0x4d, 0x46,
    0x43, 0x20, 0x73, 0x74, 0x61, 0x74, 0x69, 0x63,
    0x61, 0x6c, 0x6c, 0x79, 0x0d, 0x0a, 0x23, 0x65,
    0x6e, 0x64, 0x69, 0x66, 0x0d, 0x0a, 0x0d, 0x0a,
    0x09, 0x43, 0x54, 0x65, 0x73, 0x74, 0x44, 0x6c,
    0x67, 0x20, 0x64, 0x6c, 0x67, 0x3b, 0x0d, 0x0a,
    0x09, 0x6d, 0x5f, 0x70, 0x4d, 0x61, 0x69, 0x6e,
    0x57, 0x6e, 0x64, 0x20, 0x3d, 0x20, 0x26, 0x64,
    0x6c, 0x67, 0x3b, 0x0d, 0x0a, 0x09, 0x69, 0x6e,
    0x74, 0x20, 0x6e, 0x52, 0x65, 0x73, 0x70, 0x6f,
    0x6e, 0x73, 0x65, 0x20, 0x3d, 0x20, 0x64, 0x6c,
    0x67, 0x2e, 0x44, 0x6f, 0x4d, 0x6f, 0x64, 0x61,
    0x6c, 0x28, 0x29, 0x3b, 0x0d, 0x0a, 0x09, 0x69,
    0x66, 0x20, 0x28, 0x6e, 0x52, 0x65, 0x73, 0x70,
    0x6f, 0x6e, 0x73, 0x65, 0x20, 0x3d, 0x3d, 0x20,
    0x49, 0x44, 0x4f, 0x4b, 0x29, 0x0d, 0x0a, 0x09,
    0x7b, 0x0d, 0x0a, 0x09, 0x09, 0x2f, 0x2f, 0x20,
    0x54, 0x4f, 0x44, 0x4f, 0x3a, 0x20, 0x50, 0x6c,
    0x61, 0x63, 0x65, 0x20, 0x63, 0x6f, 0x64, 0x65,
    0x20, 0x68, 0x65, 0x72, 0x65, 0x20, 0x74, 0x6f,
    0x20, 0x68, 0x61, 0x6e, 0x64, 0x6c, 0x65, 0x20,
    0x77, 0x68, 0x65, 0x6e, 0x20, 0x74, 0x68, 0x65,
    0x20, 0x64, 0x69, 0x61, 0x6c, 0x6f, 0x67, 0x20,
    0x69, 0x73, 0x0d, 0x0a, 0x09, 0x09, 0x2f, 0x2f,
    0x20, 0x20, 0x64, 0x69, 0x73, 0x6d, 0x69, 0x73,
    0x73, 0x65, 0x64, 0x20, 0x77, 0x69, 0x74, 0x68,
    0x20, 0x4f, 0x4b, 0x0d, 0x0a, 0x09, 0x7d, 0x0d,
    0x0a, 0x09, 0x65, 0x6c, 0x73, 0x65, 0x20, 0x69,
    0x66, 0x20, 0x28, 0x6e, 0x52, 0x65, 0x73, 0x70,
    0x6f, 0x6e, 0x73, 0x65, 0x20, 0x3d, 0x3d, 0x20,
    0x49, 0x44, 0x43, 0x41, 0x4e, 0x43, 0x45, 0x4c,
    0x29, 0x0d, 0x0a, 0x09, 0x7b, 0x0d, 0x0a, 0x09,
    0x09, 0x2f, 0x2f, 0x20, 0x54, 0x4f, 0x44, 0x4f,
    0x3a, 0x20, 0x50, 0x6c, 0x61, 0x63, 0x65, 0x20,
    0x63, 0x6f, 0x64, 0x65, 0x20, 0x68, 0x65, 0x72,
    0x65, 0x20, 0x74, 0x6f, 0x20, 0x68, 0x61, 0x6e,
    0x64, 0x6c, 0x65, 0x20, 0x77, 0x68, 0x65, 0x6e,
    0x20, 0x74, 0x68, 0x65, 0x20, 0x64, 0x69, 0x61,
    0x6c, 0x6f, 0x67, 0x20, 0x69, 0x73, 0x0d, 0x0a,
    0x09, 0x09, 0x2f, 0x2f, 0x20, 0x20, 0x64, 0x69,
    0x73, 0x6d, 0x69, 0x73, 0x73, 0x65, 0x64, 0x20,
    0x77, 0x69, 0x74, 0x68, 0x20, 0x43, 0x61, 0x6e,
    0x63, 0x65, 0x6c, 0x0d, 0x0a, 0x09, 0x7d, 0x0d,
    0x0a, 0x0d, 0x0a, 0x09, 0x2f, 0x2f, 0x20, 0x53,
    0x69, 0x6e, 0x63, 0x65, 0x20, 0x74, 0x68, 0x65,
    0x20, 0x64, 0x69, 0x61, 0x6c, 0x6f, 0x67, 0x20,
    0x68, 0x61, 0x73, 0x20, 0x62, 0x65, 0x65, 0x6e,
    0x20, 0x63, 0x6c, 0x6f, 0x73, 0x65, 0x64, 0x2c,
    0x20, 0x72, 0x65, 0x74, 0x75, 0x72, 0x6e, 0x20,
    0x46, 0x41, 0x4c, 0x53, 0x45, 0x20, 0x73, 0x6f,
    0x20, 0x74, 0x68, 0x61, 0x74, 0x20, 0x77, 0x65,
    0x20, 0x65, 0x78, 0x69, 0x74, 0x20, 0x74, 0x68,
    0x65, 0x0d, 0x0a, 0x09, 0x2f, 0x2f, 0x20, 0x20,
    0x61, 0x70, 0x70, 0x6c, 0x69, 0x63, 0x61, 0x74,
    0x69, 0x6f, 0x6e, 0x2c, 0x20, 0x72, 0x61, 0x74,
    0x68, 0x65, 0x72, 0x20, 0x74, 0x68, 0x61, 0x6e,
    0x20, 0x73, 0x74, 0x61, 0x72, 0x74, 0x20, 0x74,
    0x68, 0x65, 0x20, 0x61, 0x70, 0x70, 0x6c, 0x69,
    0x63, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x27, 0x73,
    0x20, 0x6d, 0x65, 0x73, 0x73, 0x61, 0x67, 0x65,
    0x20, 0x70, 0x75, 0x6d, 0x70, 0x2e, 0x0d, 0x0a,
    0x09, 0x72, 0xe6, 0x74, 0x75, 0x72, 0x6e, 0x20,
    0x46, 0x41, 0x4c, 0x53, 0x45, 0x3b, 0x0d, 0x0a,
    0x7d, 0x0d, 0xe6
};
