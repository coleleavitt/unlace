__int64 __fastcall sub_3F11F0(__int64 a1, __int64 *a2, __int64 a3, unsigned int *a4)
{
  unsigned int v7; // eax
  unsigned int v8; // ebp
  int v9; // esi
  int v11; // esi
  __int64 v12[2]; // [rsp+0h] [rbp-C8h] BYREF
  __int64 *v13[4]; // [rsp+10h] [rbp-B8h] BYREF
  __int64 v14[2]; // [rsp+30h] [rbp-98h] BYREF
  __int64 *v15[4]; // [rsp+40h] [rbp-88h] BYREF
  __int64 v16[2]; // [rsp+60h] [rbp-68h] BYREF
  __int64 *v17; // [rsp+70h] [rbp-58h] BYREF
  __int128 v18; // [rsp+78h] [rbp-50h]
  unsigned __int64 v19; // [rsp+88h] [rbp-40h]

  v19 = __readfsqword(0x28u);
  if ( !*((_QWORD *)a4 + 2) )
    return 1;
  sub_127460((__int64)v12, a3, (__int64)a4, 0);
  LOBYTE(v7) = sub_11E2E0(*a4);
  v8 = v7;
  if ( (_BYTE)v7 )
  {
    if ( *a4 - 56 <= 1 )
    {
      if ( (get_tinfo_property() & 0x3F) == 1 )
      {
        sub_1240C0((__int64)v14, a3, (__int64)a4, 0);
        sub_63C80(a2, v12);
        sub_317070(a2 + 2, v13);
        sub_63C80(a2, v14);
        sub_317070(a2 + 2, v15);
        if ( sub_64330(v14, *(_DWORD *)(a1 + 488)) )
        {
          v11 = *(_DWORD *)(a1 + 488);
          v16[0] = 0;
          v16[1] = 0;
          sub_63880(v16, v11, 16);
          v17 = nullptr;
          v18 = 0;
          sub_63C80(a2, v16);
          sub_317070(a2 + 2, &v17);
          if ( v17 )
          {
            *(_QWORD *)&v18 = 0;
            qfree();
          }
          qfree();
        }
        if ( v15[0] )
        {
          v15[1] = nullptr;
          qfree();
        }
        v8 = 0;
        qfree();
      }
      goto LABEL_13;
    }
    v9 = *(_DWORD *)(a1 + 356);
    if ( *a4 != 4 || *((_BYTE *)a4 + 64) != 1 || a4[18] != v9 || *((_BYTE *)a4 + 32) != 10 || **((_BYTE **)a4 + 5) != 5 )
    {
      v8 = sub_64460(v12, v9, 8);
      if ( !(_BYTE)v8 )
        v8 = sub_64460(v12, *(_DWORD *)(a1 + 488), 16);
      goto LABEL_13;
    }
    sub_63C80(a2, v12);
    sub_317070(a2 + 2, v13);
  }
  v8 = 0;
LABEL_13:
  if ( v13[0] )
  {
    v13[1] = nullptr;
    qfree();
  }
  qfree();
  return v8;
}

