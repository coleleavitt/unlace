unsigned __int64 __fastcall sub_332910(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  __int64 v6; // rax
  unsigned int v7; // eax
  __int64 v8; // rax
  int v10; // eax
  _QWORD v11[5]; // [rsp+0h] [rbp-68h] BYREF
  __int64 v12; // [rsp+28h] [rbp-40h]
  __int128 v13; // [rsp+30h] [rbp-38h]
  __int64 v14; // [rsp+40h] [rbp-28h]
  unsigned __int64 v15; // [rsp+48h] [rbp-20h]

  v6 = *(_QWORD *)(a1 + 56);
  v15 = __readfsqword(0x28u);
  if ( v6 )
  {
    *(_QWORD *)(v6 + 8) = a2;
    v6 = *(_QWORD *)(a1 + 56);
  }
  if ( !*(_QWORD *)(a1 + 48) )
    *(_QWORD *)(a1 + 48) = a2;
  *(_QWORD *)(a2 + 16) = v6;
  *(_QWORD *)(a1 + 56) = a2;
  v7 = *(_DWORD *)a2;
  if ( *(_DWORD *)a2 > 0x3Cu )
  {
    if ( v7 == 62 )
      sub_175140((_QWORD *)(*(_QWORD *)(a1 + 64) + 1000LL), (unsigned __int64 *)(a2 + 24));
    goto LABEL_16;
  }
  if ( v7 > 0x3A )
  {
    v10 = *(_DWORD *)(a1 + 24) | 0x10;
LABEL_13:
    BYTE1(v10) &= ~2u;
    LOBYTE(v10) = v10 | 0x80;
    *(_DWORD *)(a1 + 24) = v10;
    goto LABEL_8;
  }
  if ( v7 != 55 )
  {
LABEL_16:
    v10 = *(_DWORD *)(a1 + 24);
    goto LABEL_13;
  }
LABEL_8:
  v8 = *(_QWORD *)(a1 + 64);
  v11[3] = 0;
  v11[4] = 0;
  v11[0] = off_4B1DB8;
  v12 = 0;
  v14 = 0;
  v11[1] = v8;
  v11[2] = a1;
  v13 = 0;
  if ( *(int *)(v8 + 4) >= 0 )
  {
    sub_3189D0((unsigned int *)a2, v11, 1, (__m128)0LL, a4, a5, a6);
    v11[0] = off_4B1DB8;
    if ( v12 )
    {
      *(_QWORD *)&v13 = 0;
      qfree();
    }
  }
  return v15 - __readfsqword(0x28u);
}

