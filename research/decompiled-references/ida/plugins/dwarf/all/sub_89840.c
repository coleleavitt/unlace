__int64 __fastcall sub_89840(_QWORD *a1, __int64 a2, _DWORD *a3, __int64 *a4, __int64 a5, __int64 a6)
{
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rax
  unsigned int v12; // ebx
  _BYTE *v14; // rbx
  int v15; // eax
  __int64 v16; // r8
  __int64 v17; // [rsp+8h] [rbp-68h]
  _BYTE *v20; // [rsp+20h] [rbp-50h] BYREF
  __int128 v21; // [rsp+28h] [rbp-48h]
  unsigned __int64 v22; // [rsp+38h] [rbp-38h]

  v22 = __readfsqword(0x28u);
  *a3 = 0;
  v9 = *a4;
  v10 = a1[2];
  v20 = nullptr;
  v11 = *(_QWORD *)(v9 + 16);
  v21 = 0;
  v17 = *(_QWORD *)(v11 + 168);
  v12 = sub_84600(a5, v10, (__int64 *)&v20);
  if ( (_BYTE)v12 )
  {
    if ( (_QWORD)v21 == 1 )
    {
      v12 = sub_891E0((__int64)a1, a2, (__int64)a4, (__int64)v20);
      goto LABEL_8;
    }
    if ( (_QWORD)v21 != 2 )
    {
      if ( (_QWORD)v21 == 3 && v20[32] == 0x9C && v20[72] == 17 && v20[112] == 34 )
      {
        v12 = (*(__int64 (__fastcall **)(_QWORD *, __int64, _DWORD *, __int64 *, __int64, __int64))(*a1 + 24LL))(
                a1,
                a2,
                a3,
                a4,
                a5,
                a6);
        goto LABEL_8;
      }
LABEL_7:
      v12 = sub_892C0((__int64)a1, a2, (__int64)a4, a5);
      goto LABEL_8;
    }
    v14 = v20;
    v15 = sub_854B0(v17, (__int64)v20);
    if ( v15 != 1 )
    {
      if ( v15 == 3 && v14[72] == 6 )
      {
        v12 = sub_848C0((__int64)a1, a2, a3, (__int64)a4, a5, a6);
        goto LABEL_8;
      }
      goto LABEL_7;
    }
    if ( (unsigned int)sub_854B0(v17, (__int64)(v14 + 40)) != 1 )
      goto LABEL_7;
    v12 = sub_896E0((__int64)a1, a2, (__int64)a4, (__int64)v14, v16, a5, a6);
  }
LABEL_8:
  if ( v20 )
  {
    *(_QWORD *)&v21 = 0;
    qfree(v20);
  }
  return v12;
}

