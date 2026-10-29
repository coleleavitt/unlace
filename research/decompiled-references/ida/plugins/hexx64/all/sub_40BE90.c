__int64 __fastcall sub_40BE90(__int64 a1, const __m128i *a2, __int64 a3, __m128i a4, __m128 a5)
{
  __int64 v5; // rax
  int v7; // r13d
  __int64 v9; // r14
  bool v10; // zf
  int v11; // eax
  _QWORD v12[2]; // [rsp+0h] [rbp-88h] BYREF
  _QWORD v13[6]; // [rsp+10h] [rbp-78h] BYREF
  int v14; // [rsp+40h] [rbp-48h]
  unsigned __int64 v15; // [rsp+48h] [rbp-40h]

  v5 = *(_QWORD *)(a1 + 8);
  v15 = __readfsqword(0x28u);
  v13[0] = &off_4E99F0;
  v13[1] = 0;
  v13[2] = 0;
  v13[4] = 0;
  v13[5] = v5;
  v14 = 0;
  v13[3] = a3;
  sub_11F760((_BYTE *)a3, v13);
  v7 = v14;
  if ( (unsigned __int8)sub_120560(a3, "_mm_storel_epi64") )
  {
    v9 = *(_QWORD *)(a3 + 72);
    sub_11CA10((char *)(a3 + 32), (char *)(*(_QWORD *)(v9 + 24) + 80LL));
    sub_12B320(a3 + 32, *(unsigned __int64 **)(a1 + 16), *(_QWORD *)(a3 + 24), 8, a4);
    v10 = *(_BYTE *)(a3 + 32) == 4;
    v12[1] = 0;
    v12[0] = 0xFFFFFFFF00000000LL;
    if ( v10 && (*(_BYTE *)(*(_QWORD *)(a3 + 40) + 4LL) & 0x10) != 0 )
      *(_DWORD *)(a3 + 4) |= 0x10u;
    if ( **(_BYTE **)(v9 + 24) == 10 )
    {
      *(_DWORD *)a3 = (*(_DWORD *)(a3 + 4) & 0x10) == 0 ? 4 : 67;
      sub_125180((unsigned __int8 *)v12, *(unsigned __int8 **)(*(_QWORD *)(v9 + 24) + 8LL));
      HIDWORD(v12[0]) = *(_DWORD *)(a3 + 36);
    }
    else
    {
      *(_DWORD *)a3 = 1;
      v11 = *(_DWORD *)(*(_QWORD *)(a1 + 16) + 52LL);
      *(_BYTE *)(a3 + 48) = 1;
      *(_DWORD *)(a3 + 52) = 2;
      *(_DWORD *)(a3 + 56) = v11;
      sub_125180((unsigned __int8 *)v12, *(unsigned __int8 **)(v9 + 24));
    }
    sub_11CA10((char *)v12, (char *)(a3 + 64));
    ++v7;
    sub_11CDA0((__int64)v12);
  }
  else
  {
    if ( !a2 )
      return (unsigned int)v7;
    if ( (unsigned __int8)sub_40B780(a1, (__int64)a2, a3, a4, a5)
      || (unsigned __int8)sub_3F5630(a1, a2, a3, a4, a5)
      || (unsigned __int8)sub_3F5A50(a1, (__int64)a2, a3, a4) )
    {
      ++v7;
    }
    else
    {
      v7 += (unsigned __int8)sub_3F5C70(a1, (__int64)a2, a3, a4);
    }
  }
  if ( v7 > 0 && a2 )
    sub_A6830((__int64)a2, a3);
  return (unsigned int)v7;
}

