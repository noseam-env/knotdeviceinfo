/*
 * This file is part of knotdeviceinfo.
 *
 * For license and copyright information please follow this link:
 * https://github.com/noseam-env/knotdeviceinfo/blob/master/LEGAL
 */

#ifndef KNOTDEVICEINFO_H
#define KNOTDEVICEINFO_H

#ifdef __cplusplus
extern "C" {
#endif

// All fields are nullable
typedef struct KNDeviceInfo {
    char* uuid;
    char* name;
    char* model;
    char* platform; // Linux, macOS, Windows
    char* system_name; // Debian GNU/Linux, macOS, Windows
    char* system_version;
} KNDeviceInfo;

void KNDeviceInfoFetch(KNDeviceInfo* dest);

void KNDeviceInfoFree(KNDeviceInfo*);

#ifdef __cplusplus
}
#endif

#endif //KNOTDEVICEINFO_H
