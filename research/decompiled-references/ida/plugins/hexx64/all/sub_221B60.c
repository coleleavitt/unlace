__int64 __fastcall sub_221B60(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4, char a5, double a6, __m128 a7)
{
  unsigned int tinfo_size; // r15d
  __int64 *v13; // rdi
  __int64 (*v14)(); // rax
  __int64 v15; // rcx
  unsigned __int8 *v17; // r12
  __int64 v18; // rbx
  __int64 v19; // rsi
  void (__fastcall *v20)(int *, __int64, int *, __int64 *); // rax
  int v21; // edx
  int v22; // esi
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  unsigned int v26; // eax
  int v27; // [rsp+4h] [rbp-8Ch]
  int v28; // [rsp+14h] [rbp-7Ch] BYREF
  int v29; // [rsp+18h] [rbp-78h] BYREF
  int v30; // [rsp+20h] [rbp-70h]
  __int64 v31[2]; // [rsp+28h] [rbp-68h] BYREF
  __int64 *v32; // [rsp+38h] [rbp-58h] BYREF
  __int128 v33; // [rsp+40h] [rbp-50h]
  unsigned __int64 v34; // [rsp+50h] [rbp-40h]

  v34 = __readfsqword(0x28u);
  *(_QWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_OWORD *)(a1 + 24) = 0;
  if ( !a3 )
  {
    v17 = (unsigned __int8 *)&unk_42B292;
    while ( 1 )
    {
      v18 = *v17;
      if ( (_BYTE)v18 != 41 && (_BYTE)v18 != 22 )
        goto LABEL_19;
      v26 = *(_DWORD *)(a2 + 72);
      if ( v26 <= 0x10 )
        v26 = getinf();
      if ( v26 == 176 )
        goto LABEL_16;
      if ( v26 == 256 )
      {
        if ( &unk_42B297 == (_UNKNOWN *)++v17 )
        {
LABEL_30:
          sub_F8A10(a2, (__int64 *)a1);
          return a1;
        }
      }
      else
      {
LABEL_19:
        v19 = *(_QWORD *)(a2 + 1504);
        v20 = *(void (__fastcall **)(int *, __int64, int *, __int64 *))(*(_QWORD *)v19 + 104LL);
        v31[0] = v18;
        v20(&v29, v19, &v28, v31);
        clear_tinfo_t();
        if ( v29 == 3 )
        {
          v21 = v28;
          v22 = v30;
          if ( v28 == 8
            || (v27 = v30,
                v23 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a2 + 1504) + 32LL))(*(_QWORD *)(a2 + 1504)),
                v21 = v28,
                v22 = v27,
                v28 <= v23) )
          {
            v31[0] = 0;
            v31[1] = 0;
            sub_63E80(v31, v22, v21, 0.0);
            v32 = nullptr;
            v33 = 0;
            sub_64280((__int64 *)a1, v31, 0.0);
            sub_316CB0((__int64 *)(a1 + 16), &v32, v24, v25);
            if ( v32 )
            {
              *(_QWORD *)&v33 = 0;
              qfree((__int64)v32);
            }
            qfree(v31[0]);
          }
        }
        else if ( v29 )
        {
          sub_1C31B0((__int64)&v29, a1, v28, 0, 0, 0.0, a7);
        }
        cleanup_argloc();
LABEL_16:
        if ( &unk_42B297 == (_UNKNOWN *)++v17 )
          goto LABEL_30;
      }
    }
  }
  tinfo_size = get_tinfo_size();
  if ( tinfo_size != -1 )
  {
    v13 = *(__int64 **)(a2 + 1504);
    if ( *(_DWORD *)(a3 + 40) )
    {
      v14 = *(__int64 (**)())(*v13 + 96);
      if ( v14 == sub_21BBE0
        || !((unsigned __int8 (__fastcall *)(__int64 *, __int64, __int64, __int64, unsigned __int64))v14)(
              v13,
              a1,
              a3,
              a2,
              a4) )
      {
        if ( a4 == -1 )
        {
          v15 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 1496) + 24LL) + 16LL)
              & (*(_QWORD *)(a2 + 1440) + *(_QWORD *)(a2 + 136) + *(int *)(a2 + 116));
        }
        else
        {
          v15 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 1496) + 24LL) + 16LL)
              & (*(_QWORD *)(a2 + 1440) + sub_1CFBB0(a2, a4, 0.0));
          if ( a5 )
            v15 += *(int *)(a2 + 116);
        }
        sub_1C5FB0((__int64)v31, a3 + 40, tinfo_size, v15, 0.0);
        sub_1C31B0((__int64)v31, a1, tinfo_size, 0, 0, 0.0, a7);
        if ( a4 != -1 )
          sub_64C70((__int64 *)a1, tinfo_size, *(_DWORD *)(*(_QWORD *)(a2 + 1504) + 80LL), 0.0);
        cleanup_argloc();
      }
    }
    else
    {
      sub_21C070(v13, (_QWORD *)a1, a3 + 32, 0.0, a7);
    }
  }
  return a1;
}

