__int64 __fastcall sub_361A0(__int64 a1, void *a2)
{
  char **v2; // r14
  char *v3; // rdx
  void *v4; // rax

  if ( !(_BYTE)byte_48880 && __cxa_guard_acquire(&byte_48880) )
  {
    qword_48548 = a1 + 8;
    qword_48558 = a1 + 16;
    qword_48568 = a1 + 24;
    qword_48578 = a1 + 32;
    qword_48588 = a1 + 40;
    qword_48598 = a1 + 48;
    qword_485A8 = a1 + 56;
    qword_485B8 = a1 + 64;
    qword_485C8 = a1 + 72;
    qword_485D8 = a1 + 80;
    qword_485E8 = a1 + 88;
    qword_485F8 = a1 + 96;
    qword_48608 = a1 + 104;
    qword_48618 = a1 + 112;
    qword_48628 = a1 + 120;
    qword_48638 = a1 + 128;
    qword_48648 = a1 + 136;
    qword_48658 = a1 + 144;
    qword_48668 = a1 + 152;
    qword_48678 = a1 + 160;
    qword_48688 = a1 + 168;
    qword_48698 = a1 + 176;
    qword_486A8 = a1 + 184;
    qword_486B8 = a1 + 192;
    qword_486C8 = a1 + 200;
    qword_486D8 = a1 + 208;
    qword_486E8 = a1 + 216;
    qword_486F8 = a1 + 224;
    qword_48708 = a1 + 232;
    qword_48718 = a1 + 240;
    qword_48728 = a1 + 248;
    qword_48738 = a1 + 256;
    qword_48748 = a1 + 264;
    qword_48758 = a1 + 272;
    qword_48768 = a1 + 280;
    qword_48778 = a1 + 288;
    qword_48788 = a1 + 296;
    qword_48798 = a1 + 304;
    qword_487A8 = a1 + 312;
    qword_487B8 = a1 + 320;
    qword_487C8 = a1 + 328;
    qword_487D8 = a1 + 336;
    qword_487E8 = a1 + 344;
    qword_487F8 = a1 + 352;
    qword_48808 = a1 + 360;
    __cxa_guard_release(&byte_48880);
  }
  v2 = &off_48540;
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
  while ( v2 != &off_48540 + 90 );
  return 1;
}

