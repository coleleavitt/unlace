__int64 __fastcall sub_62180(__int64 a1, void *a2)
{
  char **v2; // r14
  char *v3; // rdx
  void *v4; // rax

  if ( !(_BYTE)byte_7FCC0 && __cxa_guard_acquire(&byte_7FCC0) )
  {
    qword_7F7A8 = a1 + 8;
    qword_7F7B8 = a1 + 16;
    qword_7F7C8 = a1 + 24;
    qword_7F7D8 = a1 + 32;
    qword_7F7E8 = a1 + 40;
    qword_7F7F8 = a1 + 48;
    qword_7F808 = a1 + 56;
    qword_7F818 = a1 + 64;
    qword_7F828 = a1 + 72;
    qword_7F838 = a1 + 80;
    qword_7F848 = a1 + 88;
    qword_7F858 = a1 + 96;
    qword_7F868 = a1 + 104;
    qword_7F878 = a1 + 112;
    qword_7F888 = a1 + 120;
    qword_7F898 = a1 + 128;
    qword_7F8A8 = a1 + 136;
    qword_7F8B8 = a1 + 144;
    qword_7F8C8 = a1 + 152;
    qword_7F8D8 = a1 + 160;
    qword_7F8E8 = a1 + 168;
    qword_7F8F8 = a1 + 176;
    qword_7F908 = a1 + 184;
    qword_7F918 = a1 + 192;
    qword_7F928 = a1 + 200;
    qword_7F938 = a1 + 208;
    qword_7F948 = a1 + 216;
    qword_7F958 = a1 + 224;
    qword_7F968 = a1 + 232;
    qword_7F978 = a1 + 240;
    qword_7F988 = a1 + 248;
    qword_7F998 = a1 + 256;
    qword_7F9A8 = a1 + 264;
    qword_7F9B8 = a1 + 272;
    qword_7F9C8 = a1 + 280;
    qword_7F9D8 = a1 + 288;
    qword_7F9E8 = a1 + 296;
    qword_7F9F8 = a1 + 304;
    qword_7FA08 = a1 + 312;
    qword_7FA18 = a1 + 320;
    qword_7FA28 = a1 + 328;
    qword_7FA38 = a1 + 336;
    qword_7FA48 = a1 + 344;
    qword_7FA58 = a1 + 352;
    qword_7FA68 = a1 + 360;
    __cxa_guard_release(&byte_7FCC0);
  }
  v2 = &off_7F7A0;
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
  while ( v2 != &off_7F7A0 + 90 );
  return 1;
}

