unsigned __int64 __fastcall sub_2FC90(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rdi
  __int64 v5; // r15
  size_t v6; // rax
  void *ptr[2]; // [rsp+0h] [rbp-88h] BYREF
  __int64 v9; // [rsp+10h] [rbp-78h]
  _OWORD v10[2]; // [rsp+20h] [rbp-68h]
  unsigned __int64 v11; // [rsp+48h] [rbp-40h]

  v3 = 0;
  v4 = a1[5];
  v11 = __readfsqword(0x28u);
  QT::QLabel::setText(v4, *(_QWORD *)(a2 + 16) + 64LL);
  QT::QLabel::setText(a1[6], *(_QWORD *)(a2 + 24) + 64LL);
  v9 = 0;
  v10[0] = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)off_4C120), (__m128i)(unsigned __int64)"Write");
  v10[1] = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_4C128), (__m128i)(unsigned __int64)"Code");
  *(_OWORD *)ptr = 0;
  do
  {
    if ( (*(_DWORD *)(a2 + 32) & (1 << v3)) != 0 )
    {
      if ( v9 )
        QT::QString::append(ptr, " ", 1);
      v5 = *((_QWORD *)v10 + v3);
      if ( v5 && *(_BYTE *)v5 )
        v6 = strlen((const char *)(v5 + 1)) + 1;
      else
        v6 = 0;
      QT::QString::append(ptr, v5, v6);
    }
    ++v3;
  }
  while ( v3 != 4 );
  QT::QLabel::setText(a1[7], ptr);
  (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 104LL))(a1, 1);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  return v11 - __readfsqword(0x28u);
}
