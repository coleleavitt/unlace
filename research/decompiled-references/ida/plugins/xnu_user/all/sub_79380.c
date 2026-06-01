__int64 __fastcall sub_79380(__int64 a1, void *a2)
{
  char **v2; // r14
  char *v3; // rdx
  void *v4; // rax

  if ( !(_BYTE)byte_9ADE0 && __cxa_guard_acquire(&byte_9ADE0) )
  {
    qword_9A8A8 = a1 + 8;
    qword_9A8B8 = a1 + 16;
    qword_9A8C8 = a1 + 24;
    qword_9A8D8 = a1 + 32;
    qword_9A8E8 = a1 + 40;
    qword_9A8F8 = a1 + 48;
    qword_9A908 = a1 + 56;
    qword_9A918 = a1 + 64;
    qword_9A928 = a1 + 72;
    qword_9A938 = a1 + 80;
    qword_9A948 = a1 + 88;
    qword_9A958 = a1 + 96;
    qword_9A968 = a1 + 104;
    qword_9A978 = a1 + 112;
    qword_9A988 = a1 + 120;
    qword_9A998 = a1 + 128;
    qword_9A9A8 = a1 + 136;
    qword_9A9B8 = a1 + 144;
    qword_9A9C8 = a1 + 152;
    qword_9A9D8 = a1 + 160;
    qword_9A9E8 = a1 + 168;
    qword_9A9F8 = a1 + 176;
    qword_9AA08 = a1 + 184;
    qword_9AA18 = a1 + 192;
    qword_9AA28 = a1 + 200;
    qword_9AA38 = a1 + 208;
    qword_9AA48 = a1 + 216;
    qword_9AA58 = a1 + 224;
    qword_9AA68 = a1 + 232;
    qword_9AA78 = a1 + 240;
    qword_9AA88 = a1 + 248;
    qword_9AA98 = a1 + 256;
    qword_9AAA8 = a1 + 264;
    qword_9AAB8 = a1 + 272;
    qword_9AAC8 = a1 + 280;
    qword_9AAD8 = a1 + 288;
    qword_9AAE8 = a1 + 296;
    qword_9AAF8 = a1 + 304;
    qword_9AB08 = a1 + 312;
    qword_9AB18 = a1 + 320;
    qword_9AB28 = a1 + 328;
    qword_9AB38 = a1 + 336;
    qword_9AB48 = a1 + 344;
    qword_9AB58 = a1 + 352;
    qword_9AB68 = a1 + 360;
    __cxa_guard_release(&byte_9ADE0);
  }
  v2 = &off_9A8A0;
  do
  {
    v4 = dlsym(a2, *v2);
    if ( !v4 )
    {
      if ( strcmp(*v2, "SSL_get_peer_certificate") )
        return 0;
      v4 = dlsym(a2, "SSL_get1_peer_certificate");
      if ( !v4 )
        return 0;
    }
    v3 = v2[1];
    v2 += 2;
    *(_QWORD *)v3 = v4;
  }
  while ( v2 != &off_9A8A0 + 90 );
  return 1;
}

