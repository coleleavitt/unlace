__int64 __fastcall sub_585C0(_QWORD *a1)
{
  __int64 *v1; // rbp
  __int64 v2; // rax
  __m128i si128; // xmm0
  __int64 *v4; // rdx
  struct _Unwind_Exception *v6; // rbx
  __int64 v7; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v8; // [rsp+8h] [rbp-20h]

  v8 = __readfsqword(0x28u);
  if ( (unsigned int)((__int64)(a1[1] - *a1) >> 3) )
  {
    if ( !under_debugger )
    {
      v6 = (struct _Unwind_Exception *)interr(30565);
      sub_56200(v1);
      _Unwind_Resume(v6);
    }
    BUG();
  }
  v2 = operator new(0x58u);
  *(_OWORD *)(v2 + 32) = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_94160);
  *(_QWORD *)(v2 + 8) = a1;
  *(_QWORD *)v2 = off_AEE30;
  *(_QWORD *)(v2 + 24) = 0;
  *(_QWORD *)(v2 + 16) = 0x100000000LL;
  *(_QWORD *)(v2 + 56) = 0xFFFFFFFFLL;
  *(_QWORD *)(v2 + 48) = 0xFFFFFFFF00000000LL;
  *(_WORD *)(v2 + 84) = -1;
  v4 = (__int64 *)a1[1];
  *(_DWORD *)(v2 + 80) = -1;
  *(__m128i *)(v2 + 64) = si128;
  if ( v4 != (__int64 *)a1[2] )
  {
    *v4 = v2;
    a1[1] += 8LL;
    return v8 - __readfsqword(0x28u);
  }
  v7 = v2;
  sub_57F80((__int64)a1, &v7);
  if ( !v7 )
    return v8 - __readfsqword(0x28u);
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 272LL))(v7);
}

