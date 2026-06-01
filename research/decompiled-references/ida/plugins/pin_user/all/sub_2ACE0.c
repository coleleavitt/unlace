__int64 __fastcall sub_2ACE0(__int64 a1, void *a2)
{
  char **v2; // r14
  char *v3; // rdx
  void *v4; // rax

  if ( !(_BYTE)byte_3C4A0 && __cxa_guard_acquire(&byte_3C4A0) )
  {
    qword_3C0C8 = a1 + 8;
    qword_3C0D8 = a1 + 16;
    qword_3C0E8 = a1 + 24;
    qword_3C0F8 = a1 + 32;
    qword_3C108 = a1 + 40;
    qword_3C118 = a1 + 48;
    qword_3C128 = a1 + 56;
    qword_3C138 = a1 + 64;
    qword_3C148 = a1 + 72;
    qword_3C158 = a1 + 80;
    qword_3C168 = a1 + 88;
    qword_3C178 = a1 + 96;
    qword_3C188 = a1 + 104;
    qword_3C198 = a1 + 112;
    qword_3C1A8 = a1 + 120;
    qword_3C1B8 = a1 + 128;
    qword_3C1C8 = a1 + 136;
    qword_3C1D8 = a1 + 144;
    qword_3C1E8 = a1 + 152;
    qword_3C1F8 = a1 + 160;
    qword_3C208 = a1 + 168;
    qword_3C218 = a1 + 176;
    qword_3C228 = a1 + 184;
    qword_3C238 = a1 + 192;
    qword_3C248 = a1 + 200;
    qword_3C258 = a1 + 208;
    qword_3C268 = a1 + 216;
    qword_3C278 = a1 + 224;
    qword_3C288 = a1 + 232;
    qword_3C298 = a1 + 240;
    qword_3C2A8 = a1 + 248;
    qword_3C2B8 = a1 + 256;
    qword_3C2C8 = a1 + 264;
    qword_3C2D8 = a1 + 272;
    qword_3C2E8 = a1 + 280;
    qword_3C2F8 = a1 + 288;
    qword_3C308 = a1 + 296;
    qword_3C318 = a1 + 304;
    qword_3C328 = a1 + 312;
    qword_3C338 = a1 + 320;
    qword_3C348 = a1 + 328;
    qword_3C358 = a1 + 336;
    qword_3C368 = a1 + 344;
    qword_3C378 = a1 + 352;
    qword_3C388 = a1 + 360;
    __cxa_guard_release(&byte_3C4A0);
  }
  v2 = &off_3C0C0;
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
  while ( v2 != &off_3C0C0 + 90 );
  return 1;
}

