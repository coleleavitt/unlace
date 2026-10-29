__int64 __fastcall sub_1D7C0(__int64 a1)
{
  unsigned __int16 v1; // ax
  unsigned int v2; // edx
  char v3; // r12
  unsigned __int64 v4; // rax
  __int64 v5; // rbp
  unsigned __int64 *v6; // rax
  __int64 v8; // rax
  __int128 v9; // [rsp+0h] [rbp-188h] BYREF
  __int64 v10; // [rsp+10h] [rbp-178h]
  __int64 v11; // [rsp+18h] [rbp-170h]
  __int64 v12; // [rsp+20h] [rbp-168h]
  _BYTE v13[16]; // [rsp+28h] [rbp-160h] BYREF
  __int64 v14; // [rsp+38h] [rbp-150h]
  unsigned __int64 v15; // [rsp+168h] [rbp-20h] BYREF

  v1 = *(_WORD *)(a1 + 40);
  v15 = __readfsqword(0x28u);
  if ( v1 == 61 )
  {
    v3 = 0;
    v5 = *(_QWORD *)(a1 + 72) + 16LL * *(_QWORD *)(a1 + 16);
    goto LABEL_16;
  }
  if ( v1 > 0x3Du )
  {
    v2 = 0;
    if ( v1 != 63 )
      return v2;
    v3 = 1;
    v5 = *(_QWORD *)(a1 + 72) + 16LL * *(_QWORD *)(a1 + 16);
LABEL_16:
    v8 = *(_QWORD *)(a1 + 864);
    *(_QWORD *)(v8 + 56) = *(_QWORD *)(a1 + 32);
    *(_WORD *)(v8 + 73) = 0;
    v2 = 1;
    *(_QWORD *)(v8 + 40) = 25344;
    *(_QWORD *)(v8 + 48) = 0;
    *(_QWORD *)(v8 + 64) = v5;
    *(_BYTE *)(v8 + 72) = v3;
    *(_BYTE *)(v8 + 75) = 0;
    return v2;
  }
  if ( v1 == 53 )
  {
    v3 = 0;
    v4 = *(_QWORD *)(a1 + 72) + 16LL * *(_QWORD *)(a1 + 16);
  }
  else
  {
    v2 = 0;
    if ( v1 != 55 )
      return v2;
    v3 = 1;
    v4 = *(_QWORD *)(a1 + 72) + 16LL * *(_QWORD *)(a1 + 16);
  }
  v2 = 0;
  if ( *(_QWORD *)(a1 + 384) >= v4 )
  {
    v5 = *(_QWORD *)(a1 + 32) + *(unsigned __int16 *)(a1 + 42);
    v10 = -1;
    v11 = 0;
    v6 = (unsigned __int64 *)v13;
    v12 = 0;
    v9 = -1;
    do
    {
      *(_WORD *)v6 = 0;
      v6 += 5;
      *((_WORD *)v6 - 19) = 0;
      *((_WORD *)v6 - 18) = 0;
      *((_DWORD *)v6 - 2) = 0;
      *((_WORD *)v6 - 17) = 0;
      *((_OWORD *)v6 - 2) = 0;
      *(v6 - 2) = 0;
    }
    while ( v6 != &v15 );
    if ( (int)decode_insn(&v9, v5, 0.0) > 0 && (_WORD)v11 == 43 && v13[1] == 7 )
      v5 = v14;
    goto LABEL_16;
  }
  return v2;
}
