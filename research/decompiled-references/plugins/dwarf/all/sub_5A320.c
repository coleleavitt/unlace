__int64 __fastcall sub_5A320(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        unsigned __int8 (__fastcall ***a6)(_QWORD, __int64, __int64),
        __int64 a7)
{
  __int64 v11; // rbx
  __int64 v12; // rdx
  _QWORD *v13; // rsi
  __int64 v14; // rax
  _QWORD *v15; // rdi
  _QWORD *i; // rax
  __int64 v17; // rbp
  unsigned __int64 v18; // rbp
  size_t v19; // r8
  __int64 v21; // rax
  const void *v22; // r14
  void *v23; // rax
  __int64 *v25; // [rsp+8h] [rbp-80h]
  __int64 v26; // [rsp+10h] [rbp-78h]
  _BYTE v27[8]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v28; // [rsp+28h] [rbp-60h]
  unsigned __int64 v29; // [rsp+48h] [rbp-40h]

  v29 = __readfsqword(0x28u);
  if ( !a5 )
    return 0;
  v28 = 0;
  sub_58F40((__int64)v27, (__int64)a1);
  v26 = v28;
  v11 = operator new(0x1A8u);
  sub_571B0(v11, a2, 2);
  v12 = a1[1];
  *(_QWORD *)(v11 + 384) = 0;
  *(_DWORD *)(v11 + 408) = a5;
  v13 = (_QWORD *)*a1;
  *(_BYTE *)(v11 + 412) = 0;
  *(_QWORD *)v11 = &off_C9BE0;
  v14 = v12;
  *(_QWORD *)(v11 + 416) = 0;
  *(_OWORD *)(v11 + 392) = 0;
  if ( a7 )
  {
    v15 = &v13[v12];
    for ( i = v13; v15 != i; ++i )
    {
      if ( a7 == *i )
        break;
    }
    v14 = i - v13;
  }
  v17 = v14;
  if ( a1[2] < (unsigned __int64)(v12 + 1) )
  {
    v21 = qvector_reserve(a1, v13, v12 + 1, 8);
    *a1 = v21;
    v12 = a1[1];
    v13 = (_QWORD *)v21;
  }
  v25 = &v13[v17];
  memmove(v25 + 1, v25, 8 * v12 - v17 * 8);
  *v25 = v11;
  *(_QWORD *)(v11 + 416) = a4;
  ++a1[1];
  *(_BYTE *)(v11 + 412) |= 1u;
  if ( v11 + 312 != a3 )
  {
    v18 = *(_QWORD *)(a3 + 8);
    if ( v18 && (v19 = v18 - 1, v18 != 1) )
    {
      v22 = *(const void **)a3;
      v23 = *(void **)(v11 + 312);
      if ( *(_QWORD *)(v11 + 328) < v18 )
      {
        v23 = (void *)qvector_reserve(v11 + 312, *(_QWORD *)(v11 + 312), v18, 1);
        *(_QWORD *)(v11 + 312) = v23;
        v19 = v18 - 1;
      }
      *(_QWORD *)(v11 + 320) = v18;
      memmove(v23, v22, v19);
      *(_BYTE *)(*(_QWORD *)(v11 + 312) + v18 - 1) = 0;
    }
    else
    {
      *(_QWORD *)(v11 + 320) = 0;
    }
  }
  if ( (**a6)(a6, v11, a4) )
  {
    sub_59E30(v11, 1, 0);
  }
  else
  {
    sub_58FD0((__int64)v27);
    v11 = 0;
  }
  if ( v26 )
    qfree(v26);
  return v11;
}
