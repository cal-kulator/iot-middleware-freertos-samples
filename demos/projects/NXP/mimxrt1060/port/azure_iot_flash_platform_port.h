/* Copyright (c) Microsoft Corporation.
 * Licensed under the MIT License. */

/**
 * @file azure_iot_flash_platform_port.h
 *
 * @brief Port file for the NXP flash abstraction.
 *
 */

#ifndef AZURE_IOT_FLASH_PLATFORM_PORT_H
#define AZURE_IOT_FLASH_PLATFORM_PORT_H

typedef struct AzureADUImageContext
{
    void * xUpdatePartition;                   /**< TODO: Fill in for NXP partition. */
    uint8_t * pucBufferToWrite;               /**< The buffer containing the bytes to write to the flash. */
    uint32_t ulBytesToWriteLength;            /**< The length of the buffer from which to write the bytes. */
    uint32_t ulCurrentOffset;                 /**< The offset for the partition to write the bytes. */
    uint32_t ulImageFileSize;                 /**< The total size of the file to write. */
} AzureADUImageContext_t;

typedef AzureADUImageContext_t AzureADUImage_t;

#endif /* AZURE_IOT_FLASH_PLATFORM_PORT_H */
