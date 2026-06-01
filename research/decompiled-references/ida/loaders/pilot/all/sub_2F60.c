__int64 __fastcall sub_2F60(__int64 a1)
{
  __int64 result; // rax
  unsigned __int64 v2; // rax
  __int64 v3; // r13
  unsigned __int64 v4; // rbp
  unsigned __int64 v5; // r12
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rdi
  __int64 v9; // rsi
  int v10; // r8d
  __int64 v11; // rdx
  unsigned int v12; // ecx
  _DWORD *v13; // rcx
  unsigned __int64 v14; // rdx
  unsigned int v15; // [rsp+Ch] [rbp-ACh]
  __int64 v16; // [rsp+10h] [rbp-A8h] BYREF
  __int128 v17; // [rsp+18h] [rbp-A0h]
  _BYTE v18[76]; // [rsp+30h] [rbp-88h] BYREF
  unsigned __int16 v19; // [rsp+7Ch] [rbp-3Ch]
  unsigned __int64 v20; // [rsp+88h] [rbp-30h]

  v20 = __readfsqword(0x28u);
  if ( qlread(a1, v18, 78) != 78 )
    return 0;
  sub_2520((__int64)v18);
  if ( (v18[32] & 1) == 0 )
    return 0;
  if ( (__int16)v19 <= 0 )
    return 0;
  v2 = qlsize(a1);
  v3 = v19;
  v4 = v2;
  v5 = 10LL * v19 + 78;
  if ( v2 < v5 )
    return 0;
  v16 = 0;
  v6 = 0;
  v17 = 0;
  if ( v19 )
  {
    v16 = qvector_reserve(&v16, 0, v19, 10);
    memset((void *)(v16 + 10 * v17), 0, 10 * (v3 - v17));
    *(_QWORD *)&v17 = v3;
    v6 = v16;
    v3 = 10LL * v19;
  }
  v7 = qlread(a1, v6, v3);
  v8 = v16;
  result = 0;
  if ( v7 == v3 )
  {
    if ( v19 )
    {
      v9 = 0;
      v10 = 0;
      do
      {
        v11 = v8 + v9;
        v12 = *(_DWORD *)(v8 + v9 + 6);
        *(_WORD *)(v11 + 4) = __ROL2__(*(_WORD *)(v8 + v9 + 4), 8);
        *(_DWORD *)(v11 + 6) = _byteswap_ulong(v12);
        v8 = v16;
        v13 = (_DWORD *)(v16 + v9);
        v14 = *(unsigned int *)(v16 + v9 + 6);
        if ( v14 < v5 || v14 >= v4 )
        {
          result = 0;
          goto LABEL_16;
        }
        ++v10;
        v9 += 10;
        LOBYTE(result) = (*v13 == 1129140801 || *v13 == 1668117089) | result;
      }
      while ( v19 > v10 );
      result = (unsigned int)(unsigned __int8)result + 1;
    }
    else
    {
      result = 1;
    }
  }
LABEL_16:
  if ( v8 )
  {
    v15 = result;
    *(_QWORD *)&v17 = 0;
    qfree();
    return v15;
  }
  return result;
}

