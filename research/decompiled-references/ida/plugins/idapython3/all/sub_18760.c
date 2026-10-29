__int64 __fastcall sub_18760(__int64 a1, __int64 a2, char *a3, __int64 *a4)
{
  unsigned int v6; // r13d
  const char *v7; // rdx
  __int64 *v8; // rax
  unsigned int v9; // ebx
  char v11; // [rsp+1Fh] [rbp-51h] BYREF
  const char *v12; // [rsp+20h] [rbp-50h]
  __int128 v13; // [rsp+28h] [rbp-48h]
  unsigned __int64 v14; // [rsp+38h] [rbp-38h]

  v14 = __readfsqword(0x28u);
  v6 = (*(__int64 (**)(void))(qword_24798 + 536))();
  setup_new_execution(&v11, 1);
  v12 = nullptr;
  v13 = 0;
  make_script_ns();
  v7 = src;
  if ( (_QWORD)v13 )
    v7 = v12;
  v8 = (__int64 *)sub_12E70(a1, a3, v7);
  v9 = sub_17D00(a1, (__int64 *)a3, v8, a4, (__int64 *)"IDAPython_LoadProcMod", a2, 1);
  if ( v12 )
  {
    *(_QWORD *)&v13 = 0;
    qfree();
  }
  setup_new_execution(&v11, 0);
  if ( !(_BYTE)v9 )
    goto LABEL_11;
  if ( *(_BYTE *)a2 == 2 && !*(_QWORD *)(a2 + 8) )
  {
    if ( *a4 )
    {
      a4[1] = 0;
      qfree();
      *a4 = 0;
      a4[2] = 0;
    }
LABEL_11:
    v9 = 0;
  }
  (*(void (__fastcall **)(_QWORD))(qword_24798 + 552))(v6);
  return v9;
}

