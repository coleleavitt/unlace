__int64 __fastcall sub_126FF0(_QWORD *a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v5; // rdi
  __int64 v6; // r14
  _QWORD *v7; // r8
  __int64 v8; // rax
  _QWORD *v9; // r8
  __int64 v10; // r9
  unsigned int v11; // ebx
  _QWORD v13[9]; // [rsp+0h] [rbp-48h] BYREF

  v13[3] = __readfsqword(0x28u);
  if ( a2 != a3 )
  {
    sub_1166E0(a2);
    sub_11D380(a2, (unsigned __int8 *)a3);
  }
  v5 = a1[1];
  if ( !v5 )
  {
    if ( !under_debugger )
      sub_37B760(52474);
    BUG();
  }
  v6 = *(_QWORD *)(*(_QWORD *)(v5 + 480) + 112LL);
  if ( *(_BYTE *)a3 )
  {
    v7 = (_QWORD *)a1[5];
    v13[1] = 0;
    v13[0] = 0xFFFFFFFF00000000LL;
    v8 = a1[3];
    if ( a3 == v8 + 64 )
    {
      if ( *((_BYTE *)v7 + 64) )
      {
        v9 = v7 + 8;
        v10 = 1;
      }
      else
      {
        sub_1166E0((__int64)v13);
        sub_11D380((__int64)v13, (unsigned __int8 *)a3);
        v11 = sub_126650((__int16 *)v13, v6, 1);
        if ( !(_BYTE)v11 )
          goto LABEL_10;
        v5 = a1[1];
        v10 = 1;
        v9 = v13;
      }
    }
    else
    {
      if ( a3 == v8 + 32 )
        v9 = v7 + 4;
      else
        v9 = v7 + 6;
      v10 = 0;
    }
    sub_150B30(v5, a1[2], a2, a1[4], v9, v10);
    v11 = 1;
LABEL_10:
    sub_1166E0((__int64)v13);
    return v11;
  }
  return sub_124490(a2, v6, 2 * *(_DWORD *)(a3 + 4), 1);
}

