__int64 __fastcall sub_26A20(__int64 a1, char *a2, int a3, _DWORD *a4, __m128i *a5)
{
  __int64 v9; // rdi
  __int64 result; // rax
  __int64 v11; // rax
  __int64 v12; // rdi
  char *v13; // rcx
  unsigned int v14; // ebp
  __int64 v15; // rdi
  const __m128i *v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  char v20; // [rsp+0h] [rbp-98h]
  unsigned int v21; // [rsp+Ch] [rbp-8Ch]
  char *v22; // [rsp+10h] [rbp-88h] BYREF
  __int128 v23; // [rsp+18h] [rbp-80h]
  _BYTE v24[4]; // [rsp+30h] [rbp-68h] BYREF
  unsigned int v25; // [rsp+34h] [rbp-64h]
  unsigned int v26; // [rsp+38h] [rbp-60h]
  unsigned __int64 v27; // [rsp+58h] [rbp-40h]

  v27 = __readfsqword(0x28u);
  if ( a2 )
    *(_WORD *)a2 = 0;
  if ( a4 )
    *a4 = 0;
  if ( a5 )
    *a5 = 0;
  v9 = *(_QWORD *)(a1 + 8);
  result = 1;
  if ( *(_BYTE *)(v9 + 72) )
  {
    if ( (unsigned __int8)sub_23850(v9, v9 + 72, 0, (__int64)v24) )
    {
      v22 = nullptr;
      v21 = v25;
      v23 = 0;
      v11 = qvector_reserve();
      v12 = *(_QWORD *)(a1 + 8);
      v22 = (char *)v11;
      sub_24180(v12, v21, (__int64 *)&v22);
      v13 = (char *)s1;
      if ( (_QWORD)v23 )
        v13 = v22;
      sub_264E0(a2, a3, a4, v13);
      if ( v22 )
      {
        *(_QWORD *)&v23 = 0;
        qfree();
      }
      if ( a5 )
      {
        v14 = v26;
        v15 = *(_QWORD *)(a1 + 8);
        LODWORD(v22) = 0;
        v16 = (const __m128i *)sub_240C0(v15, 4u, 16 * (v26 - 1), &v22);
        if ( v16 )
        {
          if ( (unsigned int)v22 <= 0xF )
            sub_DB80((__int64)"Stream offset overrun for stream %d (offset %u)", 4, v14, v17, v18, v19, v20);
          *a5 = _mm_loadu_si128(v16);
        }
      }
      return 0;
    }
    else
    {
      return 2147942413LL;
    }
  }
  return result;
}

