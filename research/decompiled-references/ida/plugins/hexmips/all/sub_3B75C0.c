__int64 __fastcall sub_3B75C0(
        __int64 a1,
        __int64 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  __int64 v10; // rax
  unsigned int v11; // eax
  unsigned int v12; // r13d
  __int64 v14; // rdx
  int v15; // r15d
  double v16; // xmm4_8
  double v17; // xmm5_8
  int v18; // eax
  int v19; // [rsp+20h] [rbp-A0h]
  char tinfo; // [rsp+20h] [rbp-A0h]
  __int64 v21; // [rsp+28h] [rbp-98h]
  int v22; // [rsp+34h] [rbp-8Ch] BYREF
  __int64 v23; // [rsp+38h] [rbp-88h] BYREF
  __int64 v24; // [rsp+40h] [rbp-80h] BYREF
  _QWORD v25[2]; // [rsp+48h] [rbp-78h] BYREF
  __int64 tinfo_property; // [rsp+58h] [rbp-68h]
  __int128 v27; // [rsp+60h] [rbp-60h] BYREF
  __int64 v28; // [rsp+70h] [rbp-50h]
  int v29; // [rsp+78h] [rbp-48h]
  __int16 v30; // [rsp+7Ch] [rbp-44h]
  unsigned __int64 v31; // [rsp+88h] [rbp-38h]

  v31 = __readfsqword(0x28u);
  sub_386590(a2, 0);
  v23 = 0;
  v21 = sub_388820(a2 + 80);
  v19 = -1;
  if ( !v21 )
  {
    v19 = sub_3884D0(a2 + 80, nullptr, &v23, nullptr);
    if ( v19 == -1 )
    {
      v12 = 0;
      goto LABEL_3;
    }
  }
  v10 = *(_QWORD *)(a2 + 128);
  v22 = 0;
  v11 = ((__int64 (__fastcall *)(__int64, int *, __int64, const char *, _QWORD, _QWORD, __int64 (*)(), _QWORD))callui)(
          205,
          &v22,
          1,
          "Select a structure",
          0,
          *(unsigned int *)(*(_QWORD *)(v10 + 880) + 40LL),
          sub_3B5F10,
          0);
  v12 = 1;
  if ( v11 )
  {
    v14 = *(_QWORD *)(a2 + 128);
    v24 = 0;
    *(_DWORD *)(*(_QWORD *)(v14 + 880) + 40LL) = v11;
    LOWORD(v28) = 1;
    *((_QWORD *)&v27 + 1) = v11;
    *(_QWORD *)&v27 = get_idati();
    create_tinfo();
    v15 = v22;
    v25[0] = 0;
    if ( v22 )
    {
      if ( v21 )
      {
        a3 = 0;
        v25[1] = 0;
        tinfo_property = 0;
        v27 = 0;
        copy_tinfo_t();
        v28 = 0;
        copy_tinfo_t();
        v29 = 0;
        v30 = 0;
        clear_tinfo_t();
        clear_tinfo_t();
        v29 = v15;
        HIBYTE(v30) = 0x80;
        copy_tinfo_t();
        tinfo_property = 0;
        tinfo_property = get_tinfo_property();
        copy_tinfo_t();
        clear_tinfo_t();
        tinfo = create_tinfo();
        clear_tinfo_t();
        clear_tinfo_t();
        clear_tinfo_t();
        if ( tinfo )
          goto LABEL_7;
      }
    }
    else
    {
      sub_327610(&v27, *(_QWORD *)(*(_QWORD *)(a1 + 16) + 112LL), &v24);
      copy_tinfo_t();
      clear_tinfo_t();
      if ( v21 )
      {
LABEL_7:
        v12 = (unsigned __int8)sub_394730(a2, v21, v25, a3, a4, a5, a6, v16, v17, a9, a10);
LABEL_9:
        clear_tinfo_t();
        clear_tinfo_t();
        goto LABEL_3;
      }
      if ( v19 != -1 )
      {
        v18 = set_tinfo_property4();
        if ( sub_386870(v18, "Setting field type") )
        {
          sub_38B2D0(a2);
          v12 = 1;
          goto LABEL_9;
        }
      }
    }
    v12 = 0;
    goto LABEL_9;
  }
LABEL_3:
  clear_tinfo_t();
  return v12;
}

