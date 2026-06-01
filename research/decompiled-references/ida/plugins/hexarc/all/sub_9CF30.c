_QWORD *__fastcall sub_9CF30(__int64 a1, __int64 a2, char a3)
{
  int v3; // r12d
  unsigned int v4; // r12d
  _QWORD *v6; // rax
  _QWORD *v8; // [rsp+0h] [rbp-88h]
  _QWORD *v9; // [rsp+0h] [rbp-88h]
  __int64 v10; // [rsp+8h] [rbp-80h]
  _BYTE v11[16]; // [rsp+10h] [rbp-78h] BYREF
  _BYTE v12[16]; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v13[24]; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 v14; // [rsp+48h] [rbp-40h]

  v14 = __readfsqword(0x28u);
  if ( (a3 & 1) == 0 )
    return nullptr;
  v3 = *(_DWORD *)(a2 + 36);
  if ( (v3 & 1) != 0 )
    return nullptr;
  v4 = v3 >> 1;
  if ( !(unsigned __int8)sub_1163C0(v4) )
    return nullptr;
  v10 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
  sub_11D380(v11, a2 + 32);
  sub_11D380(v12, a2 + 32);
  if ( (unsigned __int8)sub_120BF0(v11, v10, v4, 0) && (unsigned __int8)sub_121190(v12, v10, v4, 0) )
  {
    v6 = (_QWORD *)a2;
    if ( (a3 & 2) == 0 )
    {
      sub_116350(a2 + 32, v11);
      sub_9C440((__int64)v13, v10, *(_QWORD *)(a2 + 24), a2 + 64, (int)v4, 1);
      v9 = sub_9CB80(a1, a2, 1, (__int64)v12, a2 + 48, (__int64)v13);
      sub_1166E0(v13);
      v6 = v9;
    }
  }
  else
  {
    v6 = nullptr;
  }
  v8 = v6;
  sub_1166E0(v12);
  sub_1166E0(v11);
  return v8;
}

