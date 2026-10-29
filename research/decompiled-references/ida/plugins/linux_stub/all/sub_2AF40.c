__int64 __fastcall sub_2AF40(__int64 a1, void *a2)
{
  char **v2; // r14
  char *v3; // rdx
  void *v4; // rax

  if ( !(_BYTE)byte_3AC00 && __cxa_guard_acquire(&byte_3AC00) )
  {
    qword_3A8C8 = a1 + 8;
    qword_3A8D8 = a1 + 16;
    qword_3A8E8 = a1 + 24;
    qword_3A8F8 = a1 + 32;
    qword_3A908 = a1 + 40;
    qword_3A918 = a1 + 48;
    qword_3A928 = a1 + 56;
    qword_3A938 = a1 + 64;
    qword_3A948 = a1 + 72;
    qword_3A958 = a1 + 80;
    qword_3A968 = a1 + 88;
    qword_3A978 = a1 + 96;
    qword_3A988 = a1 + 104;
    qword_3A998 = a1 + 112;
    qword_3A9A8 = a1 + 120;
    qword_3A9B8 = a1 + 128;
    qword_3A9C8 = a1 + 136;
    qword_3A9D8 = a1 + 144;
    qword_3A9E8 = a1 + 152;
    qword_3A9F8 = a1 + 160;
    qword_3AA08 = a1 + 168;
    qword_3AA18 = a1 + 176;
    qword_3AA28 = a1 + 184;
    qword_3AA38 = a1 + 192;
    qword_3AA48 = a1 + 200;
    qword_3AA58 = a1 + 208;
    qword_3AA68 = a1 + 216;
    qword_3AA78 = a1 + 224;
    qword_3AA88 = a1 + 232;
    qword_3AA98 = a1 + 240;
    qword_3AAA8 = a1 + 248;
    qword_3AAB8 = a1 + 256;
    qword_3AAC8 = a1 + 264;
    qword_3AAD8 = a1 + 272;
    qword_3AAE8 = a1 + 280;
    qword_3AAF8 = a1 + 288;
    qword_3AB08 = a1 + 296;
    qword_3AB18 = a1 + 304;
    qword_3AB28 = a1 + 312;
    qword_3AB38 = a1 + 320;
    qword_3AB48 = a1 + 328;
    qword_3AB58 = a1 + 336;
    qword_3AB68 = a1 + 344;
    qword_3AB78 = a1 + 352;
    qword_3AB88 = a1 + 360;
    __cxa_guard_release(&byte_3AC00);
  }
  v2 = &off_3A8C0;
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
  while ( v2 != &off_3A8C0 + 90 );
  return 1;
}

