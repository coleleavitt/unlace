__int64 __fastcall sub_51540(__int64 a1, void *a2)
{
  char **v2; // r14
  char *v3; // rdx
  void *v4; // rax

  if ( !(_BYTE)byte_6AD40 && __cxa_guard_acquire(&byte_6AD40) )
  {
    qword_6A788 = a1 + 8;
    qword_6A798 = a1 + 16;
    qword_6A7A8 = a1 + 24;
    qword_6A7B8 = a1 + 32;
    qword_6A7C8 = a1 + 40;
    qword_6A7D8 = a1 + 48;
    qword_6A7E8 = a1 + 56;
    qword_6A7F8 = a1 + 64;
    qword_6A808 = a1 + 72;
    qword_6A818 = a1 + 80;
    qword_6A828 = a1 + 88;
    qword_6A838 = a1 + 96;
    qword_6A848 = a1 + 104;
    qword_6A858 = a1 + 112;
    qword_6A868 = a1 + 120;
    qword_6A878 = a1 + 128;
    qword_6A888 = a1 + 136;
    qword_6A898 = a1 + 144;
    qword_6A8A8 = a1 + 152;
    qword_6A8B8 = a1 + 160;
    qword_6A8C8 = a1 + 168;
    qword_6A8D8 = a1 + 176;
    qword_6A8E8 = a1 + 184;
    qword_6A8F8 = a1 + 192;
    qword_6A908 = a1 + 200;
    qword_6A918 = a1 + 208;
    qword_6A928 = a1 + 216;
    qword_6A938 = a1 + 224;
    qword_6A948 = a1 + 232;
    qword_6A958 = a1 + 240;
    qword_6A968 = a1 + 248;
    qword_6A978 = a1 + 256;
    qword_6A988 = a1 + 264;
    qword_6A998 = a1 + 272;
    qword_6A9A8 = a1 + 280;
    qword_6A9B8 = a1 + 288;
    qword_6A9C8 = a1 + 296;
    qword_6A9D8 = a1 + 304;
    qword_6A9E8 = a1 + 312;
    qword_6A9F8 = a1 + 320;
    qword_6AA08 = a1 + 328;
    qword_6AA18 = a1 + 336;
    qword_6AA28 = a1 + 344;
    qword_6AA38 = a1 + 352;
    qword_6AA48 = a1 + 360;
    __cxa_guard_release(&byte_6AD40);
  }
  v2 = &off_6A780;
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
  while ( v2 != &off_6A780 + 90 );
  return 1;
}

