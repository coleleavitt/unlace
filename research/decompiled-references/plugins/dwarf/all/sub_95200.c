_BOOL8 __fastcall sub_95200(__int64 *a1)
{
  _BOOL4 v1; // ebp
  _BOOL4 v3; // eax
  __m128i v4; // kr00_16
  int v5; // eax
  unsigned __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rbx
  unsigned int v9; // eax
  struct _Unwind_Exception *v10; // rbx
  __m128i v11; // [rsp+0h] [rbp-58h] BYREF
  __int64 v12[9]; // [rsp+10h] [rbp-48h] BYREF

  v1 = 0;
  v12[3] = __readfsqword(0x28u);
  if ( !(unsigned __int8)sub_84C30((__int64)a1) )
  {
    v11 = 0;
    LOBYTE(v3) = sub_945B0(a1, &v11, 71);
    v4 = v11;
    v1 = v3;
    if ( v3 )
    {
      v5 = (*(__int64 (__fastcall **)(_QWORD))(a1[32] + 48))(*(_QWORD *)(*a1 + 24));
      v6 = sub_94EA0(*(_QWORD **)(*a1 + 16), *(_QWORD *)(*a1 + 24), v11.m128i_i64, v5 != 0);
      v8 = v7;
      if ( (v6 & 0x7FFFFFFFFFFFFFFFLL) != 0 && v6 != -1 )
      {
        v12[0] = v6;
        v12[1] = v7;
        v9 = sub_840B0(v7, v12);
        if ( v9 != -1 )
        {
          if ( (unsigned __int64)v9 >= *(_QWORD *)(v8 + 64) )
            goto LABEL_15;
          v1 = (*(_DWORD *)(*(_QWORD *)(v8 + 56) + 4LL * v9) & 1) == 0;
        }
      }
    }
    else
    {
      v1 = 1;
    }
    if ( !v4.m128i_i64[0] )
      return v1;
    if ( v4.m128i_i64[1] )
    {
      (*(void (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)(v4.m128i_i64[1] + 88) + 480LL))(
        *(_QWORD *)(v4.m128i_i64[1] + 160),
        v4.m128i_i64[0],
        10);
      return v1;
    }
    if ( under_debugger )
      BUG();
    interr(30458);
LABEL_15:
    v10 = (struct _Unwind_Exception *)sub_7F630();
    sub_84A10(&v11);
    _Unwind_Resume(v10);
  }
  return v1;
}
