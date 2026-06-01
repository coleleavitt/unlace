__int64 __fastcall sub_36EA0(__int64 a1, void *a2)
{
  char **v2; // r14
  char *v3; // rdx
  void *v4; // rax

  if ( !(_BYTE)byte_49D00 && __cxa_guard_acquire(&byte_49D00) )
  {
    qword_499C8 = a1 + 8;
    qword_499D8 = a1 + 16;
    qword_499E8 = a1 + 24;
    qword_499F8 = a1 + 32;
    qword_49A08 = a1 + 40;
    qword_49A18 = a1 + 48;
    qword_49A28 = a1 + 56;
    qword_49A38 = a1 + 64;
    qword_49A48 = a1 + 72;
    qword_49A58 = a1 + 80;
    qword_49A68 = a1 + 88;
    qword_49A78 = a1 + 96;
    qword_49A88 = a1 + 104;
    qword_49A98 = a1 + 112;
    qword_49AA8 = a1 + 120;
    qword_49AB8 = a1 + 128;
    qword_49AC8 = a1 + 136;
    qword_49AD8 = a1 + 144;
    qword_49AE8 = a1 + 152;
    qword_49AF8 = a1 + 160;
    qword_49B08 = a1 + 168;
    qword_49B18 = a1 + 176;
    qword_49B28 = a1 + 184;
    qword_49B38 = a1 + 192;
    qword_49B48 = a1 + 200;
    qword_49B58 = a1 + 208;
    qword_49B68 = a1 + 216;
    qword_49B78 = a1 + 224;
    qword_49B88 = a1 + 232;
    qword_49B98 = a1 + 240;
    qword_49BA8 = a1 + 248;
    qword_49BB8 = a1 + 256;
    qword_49BC8 = a1 + 264;
    qword_49BD8 = a1 + 272;
    qword_49BE8 = a1 + 280;
    qword_49BF8 = a1 + 288;
    qword_49C08 = a1 + 296;
    qword_49C18 = a1 + 304;
    qword_49C28 = a1 + 312;
    qword_49C38 = a1 + 320;
    qword_49C48 = a1 + 328;
    qword_49C58 = a1 + 336;
    qword_49C68 = a1 + 344;
    qword_49C78 = a1 + 352;
    qword_49C88 = a1 + 360;
    __cxa_guard_release(&byte_49D00);
  }
  v2 = &off_499C0;
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
  while ( v2 != &off_499C0 + 90 );
  return 1;
}

