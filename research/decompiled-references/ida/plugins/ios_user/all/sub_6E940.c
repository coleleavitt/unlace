__int64 __fastcall sub_6E940(__int64 a1, void *a2)
{
  char **v2; // r14
  char *v3; // rdx
  void *v4; // rax

  if ( !(_BYTE)byte_8FC00 && __cxa_guard_acquire(&byte_8FC00) )
  {
    qword_8F6C8 = a1 + 8;
    qword_8F6D8 = a1 + 16;
    qword_8F6E8 = a1 + 24;
    qword_8F6F8 = a1 + 32;
    qword_8F708 = a1 + 40;
    qword_8F718 = a1 + 48;
    qword_8F728 = a1 + 56;
    qword_8F738 = a1 + 64;
    qword_8F748 = a1 + 72;
    qword_8F758 = a1 + 80;
    qword_8F768 = a1 + 88;
    qword_8F778 = a1 + 96;
    qword_8F788 = a1 + 104;
    qword_8F798 = a1 + 112;
    qword_8F7A8 = a1 + 120;
    qword_8F7B8 = a1 + 128;
    qword_8F7C8 = a1 + 136;
    qword_8F7D8 = a1 + 144;
    qword_8F7E8 = a1 + 152;
    qword_8F7F8 = a1 + 160;
    qword_8F808 = a1 + 168;
    qword_8F818 = a1 + 176;
    qword_8F828 = a1 + 184;
    qword_8F838 = a1 + 192;
    qword_8F848 = a1 + 200;
    qword_8F858 = a1 + 208;
    qword_8F868 = a1 + 216;
    qword_8F878 = a1 + 224;
    qword_8F888 = a1 + 232;
    qword_8F898 = a1 + 240;
    qword_8F8A8 = a1 + 248;
    qword_8F8B8 = a1 + 256;
    qword_8F8C8 = a1 + 264;
    qword_8F8D8 = a1 + 272;
    qword_8F8E8 = a1 + 280;
    qword_8F8F8 = a1 + 288;
    qword_8F908 = a1 + 296;
    qword_8F918 = a1 + 304;
    qword_8F928 = a1 + 312;
    qword_8F938 = a1 + 320;
    qword_8F948 = a1 + 328;
    qword_8F958 = a1 + 336;
    qword_8F968 = a1 + 344;
    qword_8F978 = a1 + 352;
    qword_8F988 = a1 + 360;
    __cxa_guard_release(&byte_8FC00);
  }
  v2 = &off_8F6C0;
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
  while ( v2 != &off_8F6C0 + 90 );
  return 1;
}

