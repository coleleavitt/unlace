__int64 __fastcall sub_2288F0(_QWORD *a1, unsigned __int64 a2, int a3, _QWORD *a4, double a5)
{
  int v5; // ebp
  unsigned __int64 v6; // rbx
  int *v7; // r8
  int *v8; // r12
  int *i; // r14
  _DWORD *v10; // r15
  signed __int64 v11; // rcx
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // rax
  int v14; // eax
  __int64 v15; // rdx
  signed __int64 v17; // [rsp+18h] [rbp-80h]
  _QWORD *v18; // [rsp+28h] [rbp-70h]
  unsigned __int64 v19; // [rsp+30h] [rbp-68h] BYREF
  signed __int64 v20; // [rsp+38h] [rbp-60h] BYREF
  unsigned __int64 v21; // [rsp+40h] [rbp-58h] BYREF
  char v22; // [rsp+48h] [rbp-50h]
  unsigned __int64 v23; // [rsp+58h] [rbp-40h]

  v5 = a3;
  v6 = a2;
  v18 = a4;
  v23 = __readfsqword(0x28u);
  v21 = a2;
  v22 = 5;
  if ( (unsigned __int8)sub_227ED0((__int64)a1, (__int64)&v21, a4, a3, a5) )
  {
    v7 = (int *)a1[57];
    v17 = v5 + a2;
    v8 = &v7[a1[58]];
    if ( v7 != v8 )
    {
      for ( i = (int *)a1[57]; v8 != i; ++i )
      {
        v10 = (_DWORD *)(a1[54] + 104LL * *i);
        if ( (unsigned __int8)sub_1C34E0((__int64)v10, (__int64 *)&v19, &v20, v10[22], a5) )
        {
          v11 = v20;
          if ( v5 )
          {
            if ( (_DWORD)v20 != (_DWORD)v19 )
            {
              v12 = v5 + v6 - 1;
              if ( v12 >= v19 )
              {
                v13 = v19 + (int)v20 - (int)v19 - 1;
                if ( v13 >= v6 )
                {
                  if ( *v10 != 1 )
                    goto LABEL_27;
                  if ( v19 < v6 || v12 < v13 )
                  {
                    if ( v17 >= v20 )
                      v11 = v17;
                    v14 = 16;
                    if ( (__int64)v6 > (__int64)v19 )
                      v6 = v19;
                    v15 = a1[188];
                    v17 = v11;
                    v5 = v11 - v6;
                    if ( (*(_BYTE *)(v15 + 50) & 8) == 0 )
                      v14 = 2 * *(_DWORD *)(v15 + 80);
                    if ( v5 < v14 )
                      v5 = sub_11CA90(v5, a5);
                    v21 = v6;
                    v22 = 5;
                    if ( !(unsigned __int8)sub_227ED0((__int64)a1, (__int64)&v21, nullptr, v5, a5) )
                      goto LABEL_27;
                    v18 = nullptr;
                  }
                }
              }
            }
          }
        }
      }
    }
    if ( v18 )
    {
      v21 = 0;
      copy_tinfo_t();
    }
    else
    {
      if ( !*(_BYTE *)(a1[187] + 148LL) )
        v5 = sub_11CA90((int)v17 - (int)v6, a5);
      v21 = 0;
    }
    LOBYTE(v6) = v6 == sub_227D30((__int64)a1, v6, &v21, v5);
    clear_tinfo_t();
  }
  else
  {
LABEL_27:
    LODWORD(v6) = 0;
  }
  return (unsigned int)v6;
}

