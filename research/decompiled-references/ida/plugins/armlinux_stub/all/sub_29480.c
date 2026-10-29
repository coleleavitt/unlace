__int64 __fastcall sub_29480(__int64 a1, void *a2)
{
  char **v2; // r14
  char *v3; // rdx
  void *v4; // rax

  if ( !(_BYTE)byte_39740 && __cxa_guard_acquire(&byte_39740) )
  {
    qword_39408 = a1 + 8;
    qword_39418 = a1 + 16;
    qword_39428 = a1 + 24;
    qword_39438 = a1 + 32;
    qword_39448 = a1 + 40;
    qword_39458 = a1 + 48;
    qword_39468 = a1 + 56;
    qword_39478 = a1 + 64;
    qword_39488 = a1 + 72;
    qword_39498 = a1 + 80;
    qword_394A8 = a1 + 88;
    qword_394B8 = a1 + 96;
    qword_394C8 = a1 + 104;
    qword_394D8 = a1 + 112;
    qword_394E8 = a1 + 120;
    qword_394F8 = a1 + 128;
    qword_39508 = a1 + 136;
    qword_39518 = a1 + 144;
    qword_39528 = a1 + 152;
    qword_39538 = a1 + 160;
    qword_39548 = a1 + 168;
    qword_39558 = a1 + 176;
    qword_39568 = a1 + 184;
    qword_39578 = a1 + 192;
    qword_39588 = a1 + 200;
    qword_39598 = a1 + 208;
    qword_395A8 = a1 + 216;
    qword_395B8 = a1 + 224;
    qword_395C8 = a1 + 232;
    qword_395D8 = a1 + 240;
    qword_395E8 = a1 + 248;
    qword_395F8 = a1 + 256;
    qword_39608 = a1 + 264;
    qword_39618 = a1 + 272;
    qword_39628 = a1 + 280;
    qword_39638 = a1 + 288;
    qword_39648 = a1 + 296;
    qword_39658 = a1 + 304;
    qword_39668 = a1 + 312;
    qword_39678 = a1 + 320;
    qword_39688 = a1 + 328;
    qword_39698 = a1 + 336;
    qword_396A8 = a1 + 344;
    qword_396B8 = a1 + 352;
    qword_396C8 = a1 + 360;
    __cxa_guard_release(&byte_39740);
  }
  v2 = &off_39400;
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
  while ( v2 != &off_39400 + 90 );
  return 1;
}

