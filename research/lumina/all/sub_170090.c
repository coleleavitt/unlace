__int64 __fastcall sub_170090(__int64 a1, void *a2)
{
  char **v2; // r14
  char *v3; // rdx
  void *v4; // rax

  if ( !(_BYTE)byte_242740 && __cxa_guard_acquire(&byte_242740) )
  {
    qword_241648 = a1 + 8;
    qword_241658 = a1 + 16;
    qword_241668 = a1 + 24;
    qword_241678 = a1 + 32;
    qword_241688 = a1 + 40;
    qword_241698 = a1 + 48;
    qword_2416A8 = a1 + 56;
    qword_2416B8 = a1 + 64;
    qword_2416C8 = a1 + 72;
    qword_2416D8 = a1 + 80;
    qword_2416E8 = a1 + 88;
    qword_2416F8 = a1 + 96;
    qword_241708 = a1 + 104;
    qword_241718 = a1 + 112;
    qword_241728 = a1 + 120;
    qword_241738 = a1 + 128;
    qword_241748 = a1 + 136;
    qword_241758 = a1 + 144;
    qword_241768 = a1 + 152;
    qword_241778 = a1 + 160;
    qword_241788 = a1 + 168;
    qword_241798 = a1 + 176;
    qword_2417A8 = a1 + 184;
    qword_2417B8 = a1 + 192;
    qword_2417C8 = a1 + 200;
    qword_2417D8 = a1 + 208;
    qword_2417E8 = a1 + 216;
    qword_2417F8 = a1 + 224;
    qword_241808 = a1 + 232;
    qword_241818 = a1 + 240;
    qword_241828 = a1 + 248;
    qword_241838 = a1 + 256;
    qword_241848 = a1 + 264;
    qword_241858 = a1 + 272;
    qword_241868 = a1 + 280;
    qword_241878 = a1 + 288;
    qword_241888 = a1 + 296;
    qword_241898 = a1 + 304;
    qword_2418A8 = a1 + 312;
    qword_2418B8 = a1 + 320;
    qword_2418C8 = a1 + 328;
    qword_2418D8 = a1 + 336;
    qword_2418E8 = a1 + 344;
    qword_2418F8 = a1 + 352;
    `vtable for'std::bad_alloc = a1 + 360;
    __cxa_guard_release(&byte_242740);
  }
  v2 = &off_241640;
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
  while ( v2 != (char **)off_241910 );
  return 1;
}
