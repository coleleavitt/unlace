__int64 __fastcall sub_3F6BA0(__int64 a1, __int64 a2, __m128i a3)
{
  unsigned int v4; // ebp
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // r13
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // r13
  unsigned __int64 v12; // rax
  _DWORD *v13; // rdi
  __int64 v14; // rcx
  int v15; // [rsp+Ch] [rbp-4Ch]
  unsigned int *v16[9]; // [rsp+10h] [rbp-48h] BYREF

  v16[3] = (unsigned int *)__readfsqword(0x28u);
  if ( (unsigned __int8)sub_120560(a2, "_mm_cvtsi128_si32")
    && *(_BYTE *)(a2 + 64) == 8
    && (v6 = *(_QWORD *)(a2 + 72), *(_QWORD *)(v6 + 32) == 1)
    && (v7 = *(_QWORD *)(v6 + 24), *(_BYTE *)v7 == 4)
    && (v8 = *(_QWORD *)(v7 + 8), v4 = sub_120560(v8, "_mm_srli_si128"), (_BYTE)v4)
    && *(_BYTE *)(v8 + 64) == 8
    && (v10 = *(_QWORD *)(v8 + 72), *(_QWORD *)(v10 + 32) == 2)
    && (v11 = *(_QWORD *)(v10 + 24), *(_DWORD *)(v11 + 4) == 16)
    && *(_BYTE *)(v11 + 80) == 2
    && (v12 = *(_QWORD *)(*(_QWORD *)(v11 + 88) + 16LL), v12 <= 0xC) )
  {
    if ( *(_BYTE *)v11 == 4 && (v13 = *(_DWORD **)(v11 + 8), *v13 == 2) )
    {
      sub_12CBA0((__int64)v13, *(unsigned __int64 **)(*(_QWORD *)(a1 + 40) + 112LL), v12, a3);
      *(_DWORD *)(*(_QWORD *)(v11 + 8) + 68LL) = 4;
      sub_11D890(a2, *(_QWORD *)(v11 + 8));
    }
    else
    {
      v15 = *(_QWORD *)(*(_QWORD *)(v11 + 88) + 16LL);
      sub_123A40((__int64)v16, (unsigned __int8 *)v11, (unsigned int)v12, v9);
      if ( (unsigned __int8)sub_126F10(
                              (int *)v16,
                              *(unsigned __int64 **)(*(_QWORD *)(a1 + 40) + 112LL),
                              v15,
                              v14,
                              *(double *)a3.m128i_i64)
        && (v4 = sub_12AB50(v16, *(unsigned __int64 **)(*(_QWORD *)(a1 + 40) + 112LL), 4, 1, a3), (_BYTE)v4) )
      {
        *(_DWORD *)a2 = 4;
        sub_11CA10((char *)(a2 + 32), (char *)v16);
        sub_11CDA0(a2 + 64);
        *(_DWORD *)(a2 + 68) = *(_DWORD *)(a2 + 36);
      }
      else
      {
        v4 = 0;
      }
      sub_11CDA0((__int64)v16);
    }
  }
  else
  {
    return 0;
  }
  return v4;
}

