__int64 __fastcall sub_14C80(int a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // r12
  int v7; // ebp
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rbp
  char *v13; // rax
  __int64 v14; // rdx
  __m128 v15; // xmm0
  __int64 v16; // rax
  __int64 v17; // [rsp+8h] [rbp-50h] BYREF
  __int64 v18; // [rsp+10h] [rbp-48h] BYREF
  __m128i v19; // [rsp+18h] [rbp-40h] BYREF
  unsigned __int64 v20; // [rsp+28h] [rbp-30h]

  v2 = *a2;
  v20 = __readfsqword(0x28u);
  v6 = (*(__int64 (__fastcall **)(__int64 *))(v2 + 72))(a2);
  switch ( a1 )
  {
    case -2:
      sub_12610(a2);
      return 1;
    case -1:
      sub_12490(a2);
      (*(void (__fastcall **)(__int64 *, __int64, __int64))(*a2 + 8))(a2, 8, v6 + 24);
      goto LABEL_3;
    case 8:
      sub_12610(a2);
      (*(void (__fastcall **)(__int64 *, __int64, __int64))*a2)(a2, 8, v6 + 24);
      sub_12490(a2);
      goto LABEL_3;
    case 9:
LABEL_3:
      v7 = *(_DWORD *)(*(_QWORD *)v6 + 120LL * *(int *)(v6 + 24) + 24);
      (*(void (__fastcall **)(__int64 *, __int64, bool))(*a2 + 16))(a2, 3, v7 == 0);
      (*(void (__fastcall **)(__int64 *, __int64, bool))(*a2 + 16))(a2, 4, v7 == 0);
      (*(void (__fastcall **)(__int64 *, __int64, bool))(*a2 + 16))(a2, 35, v7 == 13);
      (*(void (__fastcall **)(__int64 *, __int64, __int64 *))*a2)(a2, 9, &v18);
      (*(void (__fastcall **)(__int64 *, __int64, bool))(*a2 + 16))(a2, 20, (_WORD)v18 != 0);
      (*(void (__fastcall **)(__int64 *, __int64, bool))(*a2 + 16))(a2, 21, (_WORD)v18 != 0);
      (*(void (__fastcall **)(__int64 *, __int64, bool))(*a2 + 16))(a2, 10, (_WORD)v18 != 0);
      return 1;
    case 10:
      v9 = (*(__int64 (__fastcall **)(__int64 *))(*a2 + 72))(a2);
      v10 = *(int *)(v9 + 24);
      v11 = *(_QWORD *)v9;
      v19 = 0;
      v18 = 0;
      v12 = v11 + 120 * v10;
      v13 = (char *)s;
      if ( *(_QWORD *)(v12 + 8) )
        v13 = *(char **)v12;
      s1 = v13;
      if ( (unsigned __int8)sub_14660((__int64)&v18, &v17, nullptr) )
      {
        if ( ((*(void (__fastcall **)(__int64 *, __int64, __int64))*a2)(a2, 20, v12 + 96),
              (*(void (__fastcall **)(__int64 *, __int64, __int64))*a2)(a2, 21, v12 + 88),
              *(_QWORD *)(v12 + 104) <= 1u)
          && *(_QWORD *)(v12 + 88) == -1
          || (int)sub_E8D0(
                    0,
                    (__int64)"HIDECANCEL\n"
                             "The selected configuration will replace current values.\n"
                             "Do you wish to continue?") > 0 )
        {
          v14 = *(_QWORD *)(v12 + 96);
          *(_WORD *)(v12 + 80) = 1;
          v15 = _mm_loadh_ps((const double *)(v12 + 112));
          *(_QWORD *)(v12 + 96) = v18;
          v16 = v17;
          *(__m128i *)(v12 + 104) = _mm_loadu_si128(&v19);
          v18 = v14;
          v19 = (__m128i)v15;
          *(_QWORD *)(v12 + 88) = v16;
          (*(void (__fastcall **)(__int64 *, __int64, __int64))(*a2 + 8))(a2, 9, v12 + 80);
          (*(void (__fastcall **)(__int64 *, __int64, __int64))(*a2 + 8))(a2, 20, v12 + 96);
          (*(void (__fastcall **)(__int64 *, __int64, __int64))(*a2 + 8))(a2, 21, v12 + 88);
          if ( !v18 )
            return 1;
          goto LABEL_13;
        }
      }
      if ( v18 )
      {
LABEL_13:
        v19.m128i_i64[0] = 0;
        qfree();
      }
      return 1;
    case 22:
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(1089, a2, &callui, v3, v4, v5);
      return 1;
    default:
      return 1;
  }
}

