__int64 __fastcall sub_133FE0(__int64 a1, _BYTE *a2, __int64 a3, char a4, double a5, __m128 a6)
{
  bool v7; // zf
  unsigned int v8; // r12d
  __int64 v10; // rdi
  __int64 v11; // r12
  __int64 v12; // r13
  __int64 (__fastcall *v13)(__int64, __m128i, __m128); // rax
  char v14; // al
  __int64 v15[2]; // [rsp+0h] [rbp-60h] BYREF
  __int64 v16; // [rsp+10h] [rbp-50h] BYREF
  __int128 v17; // [rsp+18h] [rbp-48h]
  unsigned __int64 v18; // [rsp+28h] [rbp-38h]

  v7 = *a2 == 10;
  v18 = __readfsqword(0x28u);
  if ( v7 )
    *(_BYTE *)(a1 + 40) = 1;
  v8 = 0;
  if ( !a4 )
  {
    v10 = *(_QWORD *)(a1 + 16);
    v15[0] = 0;
    v15[1] = 0;
    v16 = 0;
    v17 = 0;
    sub_123EA0(v10, v15, (__int64)a2, 1, 0xFFFF0000, 0.0);
    v11 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL);
    if ( !(unsigned __int8)sub_64780((_QWORD *)v11, v15) )
    {
      v14 = sub_318470((unsigned __int64 **)(v11 + 16), (__int64)&v16);
      v8 = 0;
      if ( !v14 )
      {
LABEL_10:
        if ( v16 )
        {
          *(_QWORD *)&v17 = 0;
          qfree(v16);
        }
        qfree(v15[0]);
        return v8;
      }
    }
    *(_QWORD *)(*(_QWORD *)(a1 + 48) + 8LL) = *(_QWORD *)(a1 + 24);
    *(_QWORD *)(*(_QWORD *)(a1 + 48) + 16LL) = *(_QWORD *)(a1 + 32);
    *(_BYTE *)(*(_QWORD *)(a1 + 48) + 40LL) = 0;
    v12 = *(_QWORD *)(a1 + 48);
    v13 = *(__int64 (__fastcall **)(__int64, __m128i, __m128))(*(_QWORD *)v12 + 16LL);
    if ( v13 == sub_133F70 )
    {
      v8 = 0;
      if ( *(_BYTE *)(v12 + 24) )
        goto LABEL_8;
      v8 = sub_130480(
             *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v12 + 48) + 480LL) + 112LL),
             *(const __m128i **)(v12 + 48),
             *(_QWORD *)(v12 + 56),
             *(_DWORD **)(v12 + 16),
             *(_QWORD *)(v12 + 56),
             *(_QWORD *)(v12 + 64) + 32LL,
             (__m128i)0LL,
             a6,
             *(_QWORD *)(v12 + 64) + 48LL,
             *(_DWORD *)(v12 + 80));
      if ( v8 )
      {
        sub_133D30(v12);
        v12 = *(_QWORD *)(a1 + 48);
        v8 = 0;
LABEL_8:
        if ( *(_BYTE *)(v12 + 40) )
          *(_BYTE *)(a1 + 40) = 1;
        goto LABEL_10;
      }
    }
    else
    {
      v8 = ((__int64 (__fastcall *)(_QWORD, _BYTE *))v13)(*(_QWORD *)(a1 + 48), a2);
    }
    v12 = *(_QWORD *)(a1 + 48);
    goto LABEL_8;
  }
  return v8;
}

