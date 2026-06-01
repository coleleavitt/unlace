__int64 __fastcall sub_2D100(__int64 a1, __int64 *a2, __int64 a3, int a4, int a5, int a6)
{
  int v6; // edx
  __int64 v8; // rdi
  int v9; // eax
  _QWORD *v10; // rdi
  __int64 v11; // rax
  struct _Unwind_Exception *v13; // rbx
  __int64 v14; // [rsp+0h] [rbp-88h] BYREF
  __int128 v15; // [rsp+8h] [rbp-80h]
  __int64 v16; // [rsp+20h] [rbp-68h]
  __int64 v17; // [rsp+28h] [rbp-60h]
  __int64 v18; // [rsp+30h] [rbp-58h]
  __int128 v19; // [rsp+38h] [rbp-50h]
  __int128 v20; // [rsp+48h] [rbp-40h]
  __int128 v21; // [rsp+58h] [rbp-30h]
  unsigned __int64 v22; // [rsp+68h] [rbp-20h]

  v6 = *(_DWORD *)(a1 + 1360);
  v22 = __readfsqword(0x28u);
  if ( !v6 )
  {
    sub_39260(*(_QWORD *)(a1 + 864));
    v8 = *(_QWORD *)(a1 + 864);
    a2 = &v14;
    v14 = 0;
    v15 = 0;
    sub_39C30(v8, &v14);
    if ( v14 )
    {
      *(_QWORD *)&v15 = 0;
      qfree();
    }
  }
  *(_DWORD *)(a1 + 1360) = 5;
  sub_3A540(*(_QWORD *)(a1 + 864), (_DWORD)a2, v6, a4, a5, a6, v14, v15, *((__int64 *)&v15 + 1));
  v19 = 0;
  v16 = 0xFFFFFFFFLL;
  v17 = -1;
  v18 = 0;
  v20 = 0;
  v21 = 0;
  set_debug_event_code();
  if ( (((HIDWORD(v18) & 0xFFFFFFF) - 2) & 0xFFFFFFFD) != 0 )
  {
    v13 = (struct _Unwind_Exception *)sub_1A980();
    if ( v14 )
    {
      *(_QWORD *)&v15 = 0;
      qfree();
    }
    _Unwind_Resume(v13);
  }
  v9 = *(_DWORD *)(a1 + 656);
  v10 = *(_QWORD **)(a1 + 168);
  LODWORD(v19) = 0;
  v17 = -1;
  LODWORD(v16) = v9;
  v11 = *(_QWORD *)(a1 + 184);
  LOBYTE(v18) = 1;
  if ( v10 == (_QWORD *)(v11 - 72) )
  {
    sub_2CCD0((_QWORD *)(a1 + 120));
  }
  else
  {
    *v10 = 0xFFFFFFFFLL;
    v10[1] = -1;
    v10[2] = 0;
    copy_debug_event();
    *(_QWORD *)(a1 + 168) += 72LL;
  }
  free_debug_event();
  return 1;
}

