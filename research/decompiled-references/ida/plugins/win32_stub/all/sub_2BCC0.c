__int64 __fastcall sub_2BCC0(__int64 a1, void *a2)
{
  char **v2; // r14
  char *v3; // rdx
  void *v4; // rax

  if ( !(_BYTE)byte_3BC60 && __cxa_guard_acquire(&byte_3BC60) )
  {
    qword_3B908 = a1 + 8;
    qword_3B918 = a1 + 16;
    qword_3B928 = a1 + 24;
    qword_3B938 = a1 + 32;
    qword_3B948 = a1 + 40;
    qword_3B958 = a1 + 48;
    qword_3B968 = a1 + 56;
    qword_3B978 = a1 + 64;
    qword_3B988 = a1 + 72;
    qword_3B998 = a1 + 80;
    qword_3B9A8 = a1 + 88;
    qword_3B9B8 = a1 + 96;
    qword_3B9C8 = a1 + 104;
    qword_3B9D8 = a1 + 112;
    qword_3B9E8 = a1 + 120;
    qword_3B9F8 = a1 + 128;
    qword_3BA08 = a1 + 136;
    qword_3BA18 = a1 + 144;
    qword_3BA28 = a1 + 152;
    qword_3BA38 = a1 + 160;
    qword_3BA48 = a1 + 168;
    qword_3BA58 = a1 + 176;
    qword_3BA68 = a1 + 184;
    qword_3BA78 = a1 + 192;
    qword_3BA88 = a1 + 200;
    qword_3BA98 = a1 + 208;
    qword_3BAA8 = a1 + 216;
    qword_3BAB8 = a1 + 224;
    qword_3BAC8 = a1 + 232;
    qword_3BAD8 = a1 + 240;
    qword_3BAE8 = a1 + 248;
    qword_3BAF8 = a1 + 256;
    qword_3BB08 = a1 + 264;
    qword_3BB18 = a1 + 272;
    qword_3BB28 = a1 + 280;
    qword_3BB38 = a1 + 288;
    qword_3BB48 = a1 + 296;
    qword_3BB58 = a1 + 304;
    qword_3BB68 = a1 + 312;
    qword_3BB78 = a1 + 320;
    qword_3BB88 = a1 + 328;
    qword_3BB98 = a1 + 336;
    qword_3BBA8 = a1 + 344;
    qword_3BBB8 = a1 + 352;
    qword_3BBC8 = a1 + 360;
    __cxa_guard_release(&byte_3BC60);
  }
  v2 = &off_3B900;
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
  while ( v2 != &off_3B900 + 90 );
  return 1;
}

