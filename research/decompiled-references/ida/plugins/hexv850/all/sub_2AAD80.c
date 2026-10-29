void __fastcall sub_2AAD80(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // r12
  __int64 v4; // r15
  __int64 v5; // r14
  _QWORD *v6; // rbx

  *a1 = &off_4B5A78;
  v2 = a1[5];
  if ( v2 )
  {
    v3 = a1[6];
    if ( v3 )
    {
      v4 = 0;
      v5 = 0;
      do
      {
        v6 = (_QWORD *)(v2 + v4);
        ++v5;
        v4 += 264;
        *v6 = off_4B4E00;
        sub_1181E0((__int64)(v6 + 28));
        sub_1181E0((__int64)(v6 + 26));
        sub_1181E0((__int64)(v6 + 24));
        sub_1181E0((__int64)(v6 + 12));
        sub_1181E0((__int64)(v6 + 10));
        sub_1181E0((__int64)(v6 + 8));
        v2 = a1[5];
      }
      while ( v3 != v5 );
    }
    a1[6] = 0;
    qfree();
  }
  operator delete(a1, 0x40u);
}

