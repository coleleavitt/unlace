unsigned __int64 __fastcall sub_3F0FB0(__int64 a1, __int64 a2, __int64 *a3, double a4)
{
  int v5; // esi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  int v10; // r9d
  __int64 v11[2]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v12; // [rsp+10h] [rbp-38h] BYREF
  __int128 v13; // [rsp+18h] [rbp-30h]
  unsigned __int64 v14; // [rsp+28h] [rbp-20h]

  v14 = __readfsqword(0x28u);
  if ( *(_BYTE *)(a1 + 3800) )
  {
    v5 = *(_DWORD *)(a1 + 688);
    v11[0] = 0;
    v11[1] = 0;
    sub_63E80(v11, v5, 3, a4);
    v12 = 0;
    v13 = 0;
    sub_64640(a3, v11, v7, v8, v9, v10);
    sub_317C60(a3 + 2, (__int64)&v12);
    if ( v12 )
    {
      *(_QWORD *)&v13 = 0;
      qfree(v12);
    }
    qfree(v11[0]);
  }
  return v14 - __readfsqword(0x28u);
}

