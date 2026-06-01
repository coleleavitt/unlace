__int64 __fastcall sub_92040(__int64 a1, unsigned int *a2)
{
  unsigned int v2; // r12d
  unsigned int v3; // r12d
  _DWORD *v5; // rax
  _DWORD *v6; // r15
  __int64 v7; // [rsp+8h] [rbp-80h]
  unsigned int *v8; // [rsp+18h] [rbp-70h] BYREF
  _QWORD v9[13]; // [rsp+20h] [rbp-68h] BYREF

  v2 = a2[9];
  v9[5] = __readfsqword(0x28u);
  if ( (unsigned __int8)sub_11B1C0(a2 + 12, v9, 1)
    && 8 * v2 - 1 == v9[0]
    && (unsigned __int8)sub_120FA0(a2 + 8, a2 + 16, 0)
    && (v8 = a2, v5 = (_DWORD *)sub_124880(a1, a2 + 8, &v8, 0), (v6 = v5) != nullptr)
    && (unsigned int)(*v5 - 8) <= 1
    && v5[17] > (signed int)a2[9]
    && (v7 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL), v3 = sub_120A10(v5 + 16, v7, a2 + 8, 1), (_BYTE)v3) )
  {
    sub_122E60(v9, a1, v6, 1);
    if ( a2 == (unsigned int *)sub_A51D0(a1, v9, *((_QWORD *)v8 + 1), 0, 1) )
    {
      *v6 = 9;
      sub_121450(v6 + 8, v7, *a2, *((_QWORD *)a2 + 3), a2 + 12);
      sub_1189E0(a2);
    }
    else
    {
      v3 = 0;
    }
    if ( v9[2] )
    {
      v9[3] = 0;
      qfree();
    }
    qfree();
  }
  else
  {
    return 0;
  }
  return v3;
}

